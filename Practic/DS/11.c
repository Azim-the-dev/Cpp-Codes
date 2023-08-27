#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct
{
    Node *front;
    Node *rear;
} Queue;

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode != NULL)
    {
        newNode->data = value;
        newNode->next = NULL;
    }
    return newNode;
}

void initializeQueue(Queue *queue)
{
    queue->front = NULL;
    queue->rear = NULL;
}

int isEmpty(Queue *queue)
{
    return queue->front == NULL;
}

void enqueue(Queue *queue, int value)
{
    Node *newNode = createNode(value);
    if (newNode != NULL)
    {
        if (isEmpty(queue))
        {
            queue->front = newNode;
            queue->rear = newNode;
        }
        else
        {
            queue->rear->next = newNode;
            queue->rear = newNode;
        }
    }
}

int dequeue(Queue *queue)
{
    if (!isEmpty(queue))
    {
        Node *temp = queue->front;
        int value = temp->data;
        queue->front = temp->next;
        free(temp);
        return value;
    }
    return -1;
}

int main()
{
    Queue queue;
    initializeQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("Dequeued: %d\n", dequeue(&queue));
    printf("Dequeued: %d\n", dequeue(&queue));
    printf("Dequeued: %d\n", dequeue(&queue));

    return 0;
}