// 12. Polynomial representation using linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct Term
{
    int coefficient;
    int exponent;
    struct Term *next;
} Term;

Term *createTerm(int coeff, int exp)
{
    Term *newTerm = (Term *)malloc(sizeof(Term));
    if (newTerm != NULL)
    {
        newTerm->coefficient = coeff;
        newTerm->exponent = exp;
        newTerm->next = NULL;
    }
    return newTerm;
}

void insertTerm(Term **head, int coeff, int exp)
{
    Term *newTerm = createTerm(coeff, exp);
    if (newTerm != NULL)
    {
        if (*head == NULL || exp > (*head)->exponent)
        {
            newTerm->next = *head;
            *head = newTerm;
        }
        else
        {
            Term *current = *head;
            while (current->next != NULL && exp <= current->next->exponent)
            {
                current = current->next;
            }
            newTerm->next = current->next;
            current->next = newTerm;
        }
    }
}

void printPolynomial(Term *head)
{
    Term *current = head;
    while (current != NULL)
    {
        printf("%dx^%d", current->coefficient, current->exponent);
        if (current->next != NULL)
        {
            printf(" + ");
        }
        current = current->next;
    }
    printf("\n");
}

int main()
{
    Term *poly = NULL;

    insertTerm(&poly, 3, 2);
    insertTerm(&poly, -5, 1);
    insertTerm(&poly, 2, 0);
    insertTerm(&poly, 1, 3);

    printf("Polynomial: ");
    printPolynomial(poly);

    return 0;
}