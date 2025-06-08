#include <vector>
#include <chrono>
#include "processService.hpp"
#include "processLog.hpp"
#include "queueService.hpp"
#include "cpuBoundProcessExecution.hpp"
#include "ioBoundProcessExecution.hpp"
#include "cfs.hpp"

void cfs::createProcessLog(std::vector<ProcessLog *> &logs, long long startTime, long long endTime, int pid)
{
    ProcessLog *p = new ProcessLog();
    p->pid = pid;
    p->startTime = startTime;
    p->endTime = endTime;
    logs.push_back(p);
}

std::vector<ProcessLog *> cfs::schedule(std::vector<Process *> processList)
{
    QueueService queue;
    std::vector<ProcessLog *> logs;

    for (auto process : processList)
    {
        queue.push_element(process);
    }

    while (!queue.is_empty())
    {
        Process *process = queue.top_element();
        queue.pop_element();

        auto startTime = std::chrono::steady_clock::now();

        if (process->processNature == PROCESS_NATURE::CPU_BOUND)
        {
            executeCpuBoundProcess(process, 1, queue);
        }
        else
        {
            handleIoBoundProcess(process, 10, queue);
        }

        // Record end time in milliseconds
        auto endTime = std::chrono::steady_clock::now();

        // Calculate duration in milliseconds
        long long startTimeMs = std::chrono::duration_cast<std::chrono::nanoseconds>(startTime.time_since_epoch()).count();
        long long endTimeMs = std::chrono::duration_cast<std::chrono::nanoseconds>(endTime.time_since_epoch()).count();

        createProcessLog(logs, startTimeMs, endTimeMs, process->pid);
    }

    return logs;
}
