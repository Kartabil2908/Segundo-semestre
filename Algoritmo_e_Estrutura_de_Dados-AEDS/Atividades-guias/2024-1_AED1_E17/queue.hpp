#ifndef _QUEUE_HPP_
#define _QUEUE_HPP_

#include <iostream>
class IntQueue {
private:
    int length;
    int capacity;
    int* data;

public:
    IntQueue(int initialCapacity = 10) : length(0), capacity(initialCapacity) {
        data = new int[capacity];
    }

    void enqueue(IntQueue* queue, int value) {
        if (queue->length == queue->capacity) {
            // realoca com o dobro da capacidade
            int newCapacity = queue->capacity * 2;
            int* newData = new int[newCapacity];
            
            for (int i = 0; i < queue->length; i++) {
                newData[i] = queue->data[i];
            }
            delete[] queue->data;
            queue->data = newData;
            queue->capacity = newCapacity;
        }
        queue->data[queue->length++] = value;
    }

    void dequeue(IntQueue* queue) {
        if (queue->length == 0) {
            // queue is empty, do nothing
            return;
        }
        for (int i = 0; i < queue->length - 1; i++) {
            queue->data[i] = queue->data[i + 1];
        }
        queue->length--;
    }

    int compareQueues(IntQueue* p, IntQueue* q) {
        int i = 0;
        while (i < p->length && i < q->length) {
            if (p->data[i] < q->data[i]) {
                return -1;
            } else if (p->data[i] > q->data[i]) {
                return 1;
            }
            i++;
        }
        if (p->length < q->length) {
            return -1;
        } else if (p->length > q->length) {
            return 1;
        }
        return 0;
    }

    IntQueue* intQueue_join(IntQueue* p, IntQueue* q) {
        IntQueue* result = new IntQueue();
        result->length = p->length + q->length;
        result->data = new int[result->length];

        int i;
        for (i = 0; i < p->length; i++) {
            result->data[i] = p->data[i];
        }
        
        for (int j = 0; j < q->length; j++) {
            result->data[i++] = q->data[j];
        }

        return result;
    }

    int intQueue_search(IntQueue* queue, int value) {
        for (int i = 0; i < queue->length; i++) {
            if (queue->data[i] == value) {
                return 1; // found
            }
        }
        return 0; // not found
    }
};

#endif
