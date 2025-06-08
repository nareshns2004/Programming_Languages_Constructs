#include "ioBoundProcessExecution.hpp"
#include <thread>

constexpr int NICE_0_LOAD = 1024;  // Standard Linux value

void handleIoBoundProcess(Process* process, int ioWaitTime, QueueService& q) {
    // Simulate IO wait
    std::this_thread::sleep_for(std::chrono::milliseconds(ioWaitTime));
    
    // Update vruntime for IO wait period (penalize IO-bound processes)
    const double weight = weightFunction(process->priority);
    process->vruntime += (ioWaitTime * NICE_0_LOAD) / weight;
    
    // Deduct CPU burst time (1 time slice after IO)
    const int executedTime = 1;  // Same as CPU time slice
    process->cpu_burst_time -= executedTime;
    
    // CFS vruntime update for CPU portion
    process->vruntime += (executedTime * NICE_0_LOAD) / weight;
    
    // Requeue if more burst remains
    if (process->cpu_burst_time > 0) {
        q.push_element(process);
    }
}