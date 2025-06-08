#include <iostream>
#include <queue>
#include <vector>
#include "processService.hpp"
#include <memory>
#include "queueService.hpp"

QueueService::QueueService() {
}

void QueueService::push_element(Process *p)
{
    q.push(p);
}

void QueueService::pop_element()
{
    q.pop();
}

bool QueueService::is_empty()
{
    return q.empty();
}

Process* QueueService::top_element()
{
    return q.top();
}