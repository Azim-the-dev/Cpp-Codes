// 10. Linked list implementation of Stack.

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct
{
    Node *top;
} Stack;

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

void initializeStack(Stack *stack)
{
    stack->top = NULL;
}

int isEmpty(Stack *stack)
{
    return stack->top == NULL;
}

void push(Stack *stack, int value)
{
    Node *newNode = createNode(value);
    if (newNode != NULL)
    {
        newNode->next = stack->top;
        stack->top = newNode;
    }
}

int pop(Stack *stack)
{
    if (!isEmpty(stack))
    {
        Node *temp = stack->top;
        int value = temp->data;
        stack->top = temp->next;
        free(temp);
        return value;
    }
    return -1;
}

int main()
{
    Stack stack;
    initializeStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Popped: %d\n", pop(&stack));
    printf("Popped: %d\n", pop(&stack));
    printf("Popped: %d\n", pop(&stack));

    return 0;
}