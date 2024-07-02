#include "queue.hpp"
#include "stack.hpp"

void metodo_01()
{
    IntStack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
}

void metodo_02()
{
    IntStack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.pop(); 
    stack.pop();
}

void metodo_03()
{
    IntStack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.dup(); 
    stack.dup(); 
}

void metodo_04()
{
    IntStack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.swap(); 
    stack.swap(); 
}

void metodo_05()
{
    IntStack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    stack.reverse(); 
}

void metodo_06()
{
    IntQueue queue;
    queue.enqueue(&queue, 1);
    queue.enqueue(&queue, 2);
    queue.enqueue(&queue, 3);
}

void metodo_07()
{
    IntQueue queue;
    queue.enqueue(&queue, 1);
    queue.enqueue(&queue, 2);
    queue.enqueue(&queue, 3);
    queue.dequeue(&queue); 
    queue.dequeue(&queue); 
}

void metodo_08()
{
    IntQueue queue1;
    queue1.enqueue(&queue1, 1);
    queue1.enqueue(&queue1, 2);
    queue1.enqueue(&queue1, 3);

    IntQueue queue2;
    queue2.enqueue(&queue2, 1);
    queue2.enqueue(&queue2, 2);
    queue2.enqueue(&queue2, 4);

    int result = queue1.compareQueues(&queue1, &queue2); 
}

void metodo_09()
{
    IntQueue queue1;
    queue1.enqueue(&queue1, 1);
    queue1.enqueue(&queue1, 2);
    queue1.enqueue(&queue1, 3);

    IntQueue queue2;
    queue2.enqueue(&queue2, 4);
    queue2.enqueue(&queue2, 5);
    queue2.enqueue(&queue2, 6);

    IntQueue* result = queue1.intQueue_join(&queue1, &queue2); 
}

void metodo_10()
{
    IntQueue queue;
    queue.enqueue(&queue, 1);
    queue.enqueue(&queue, 2);
    queue.enqueue(&queue, 3);
    queue.enqueue(&queue, 4);
    queue.enqueue(&queue, 5);

    int found = queue.intQueue_search(&queue, 3);
    int notFound = queue.intQueue_search(&queue, 6); 
}