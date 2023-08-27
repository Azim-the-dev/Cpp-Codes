// 6. Array implementation of Circular Queue.

#include <stdio.h>
#define MAX_SIZE 100

typedef struct
{
    int data[MAX_SIZE];
    int front, rear;
} CircularQueue;

void initialize(CircularQueue *queue)
{
    queue->front = -1;
    queue->rear = -1;
}

int isEmpty(CircularQueue *queue)
{
    return queue->front == -1;
}

int isFull(CircularQueue *queue)
{
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

void enqueue(CircularQueue *queue, int value)
{
    if (!isFull(queue))
    {
        if (isEmpty(queue))
        {
            queue->front = 0;
        }
        queue->rear = (queue->rear + 1) % MAX_SIZE;
        queue->data[queue->rear] = value;
    }
}

int dequeue(CircularQueue *queue)
{
    if (!isEmpty(queue))
    {
        int value = queue->data[queue->front];
        if (queue->front == queue->rear)
        {
            initialize(queue);
        }
        else
        {
            queue->front = (queue->front + 1) % MAX_SIZE;
        }
        return value;
    }
    return -1;
}

int main()
{
    CircularQueue queue;
    initialize(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("Dequeued: %d\n", dequeue(&queue));
    printf("Dequeued: %d\n", dequeue(&queue));
    printf("Dequeued: %d\n", dequeue(&queue));

    return 0;
}