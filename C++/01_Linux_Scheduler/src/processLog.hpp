#ifndef PROCESS_LOG_HPP
#define PROCESS_LOG_HPP

#include <ctime>

struct ProcessLog {
    int pid;
    long long startTime;
    long long endTime;
};

#endif // PROCESS_LOG_HPP
