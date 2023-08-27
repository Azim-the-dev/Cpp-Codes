// 7. To implement linear linked list and perform different operation such as node insert and  delete, search of an item, reverse the list.

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

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

void insertNode(Node **head, int value)
{
    Node *newNode = createNode(value);
    if (newNode != NULL)
    {
        newNode->next = *head;
        *head = newNode;
    }
}

void deleteNode(Node **head, int value)
{
    Node *current = *head;
    Node *prev = NULL;

    while (current != NULL && current->data != value)
    {
        prev = current;
        current = current->next;
    }

    if (current != NULL)
    {
        if (prev == NULL)
        {
            *head = current->next;
        }
        else
        {
            prev->next = current->next;
        }
        free(current);
    }
}

Node *searchNode(Node *head, int value)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current->data == value)
        {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void reverseList(Node **head)
{
    Node *prev = NULL;
    Node *current = *head;
    Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

void printList(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    Node *list = NULL;

    insertNode(&list, 10);
    insertNode(&list, 20);
    insertNode(&list, 30);
    insertNode(&list, 40);

    printf("Original List: ");
    printList(list);

    deleteNode(&list, 20);

    printf("List after deleting 20: ");
    printList(list);

    Node *searchResult = searchNode(list, 30);
    if (searchResult != NULL)
    {
        printf("Found: %d\n", searchResult->data);
    }
    else
    {
        printf("Not found.\n");
    }

    reverseList(&list);
    printf("Reversed List: ");
    printList(list);

    return 0;
}