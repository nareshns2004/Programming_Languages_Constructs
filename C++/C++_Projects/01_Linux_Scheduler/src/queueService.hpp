#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <queue>
#include <vector>
#include "processService.hpp"
#include <memory>
#include "queueService.hpp"

class QueueService {
private:
    struct Compare {
        bool operator()(Process* a, Process* b) {
            return a->vruntime > b->vruntime;
        }
    };
    std::priority_queue<Process*, std::vector<Process*>, Compare> q;

public:
    QueueService();
    void push_element(Process* p);
    void pop_element();
    bool is_empty();
    Process* top_element();
};

#endif // QUEUE_HPP
