// 9. To implement double linked list and perform different operation such as node insert  and delete.

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode != NULL)
    {
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;
    }
    return newNode;
}

void insertNode(Node **head, int value)
{
    Node *newNode = createNode(value);
    if (newNode != NULL)
    {
        if (*head == NULL)
        {
            *head = newNode;
        }
        else
        {
            newNode->next = *head;
            (*head)->prev = newNode;
            *head = newNode;
        }
    }
}

void deleteNode(Node **head, int value)
{
    if (*head != NULL)
    {
        Node *current = *head;
        while (current != NULL && current->data != value)
        {
            current = current->next;
        }

        if (current != NULL)
        {
            if (current->prev != NULL)
            {
                current->prev->next = current->next;
            }
            else
            {
                *head = current->next;
            }

            if (current->next != NULL)
            {
                current->next->prev = current->prev;
            }

            free(current);
        }
    }
}

void printList(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    Node *dlist = NULL;

    insertNode(&dlist, 10);
    insertNode(&dlist, 20);
    insertNode(&dlist, 30);
    insertNode(&dlist, 40);

    printf("Original Doubly Linked List: ");
    printList(dlist);

    deleteNode(&dlist, 20);

    printf("List after deleting 20: ");
    printList(dlist);

    return 0;
}