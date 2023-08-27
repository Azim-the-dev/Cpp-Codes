// 8. To implement circular linked list and perform different operation such as node insert  and delete.

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
        newNode->next = newNode;
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
            Node *current = *head;
            while (current->next != *head)
            {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = *head;
        }
    }
}

void deleteNode(Node **head, int value)
{
    if (*head != NULL)
    {
        Node *current = *head;
        Node *prev = NULL;

        while (current->next != *head && current->data != value)
        {
            prev = current;
            current = current->next;
        }

        if (current->data == value)
        {
            if (prev == NULL)
            {
                if (current->next == *head)
                {
                    *head = NULL;
                }
                else
                {
                    Node *last = current;
                    while (last->next != *head)
                    {
                        last = last->next;
                    }
                    *head = current->next;
                    last->next = *head;
                }
            }
            else
            {
                prev->next = current->next;
            }
            free(current);
        }
    }
}

void printList(Node *head)
{
    if (head != NULL)
    {
        Node *current = head;
        do
        {
            printf("%d -> ", current->data);
            current = current->next;
        } while (current != head);
        printf("Head\n");
    }
    else
    {
        printf("Empty List\n");
    }
}

int main()
{
    Node *clist = NULL;

    insertNode(&clist, 10);
    insertNode(&clist, 20);
    insertNode(&clist, 30);
    insertNode(&clist, 40);

    printf("Original Circular List: ");
    printList(clist);

    deleteNode(&clist, 20);

    printf("List after deleting 20: ");
    printList(clist);

    return 0;
}