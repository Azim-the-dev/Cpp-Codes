// 14. To represent a Sparse Matrix.
// 14. To represent a Sparse Matrix.

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int row;
    int col;
    int value;
    struct Node *next;
} Node;

typedef struct
{
    int rows;
    int cols;
    Node **data;
} SparseMatrix;

SparseMatrix *createSparseMatrix(int rows, int cols)
{
    SparseMatrix *matrix = (SparseMatrix *)malloc(sizeof(SparseMatrix));
    if (matrix != NULL)
    {
        matrix->rows = rows;
        matrix->cols = cols;
        matrix->data = (Node **)malloc(rows * sizeof(Node *));
        for (int i = 0; i < rows; i++)
        {
            matrix->data[i] = NULL;
        }
    }
    return matrix;
}

void insertElement(SparseMatrix *matrix, int row, int col, int value)
{
    if (row >= 0 && row < matrix->rows && col >= 0 && col < matrix->cols)
    {
        Node *newNode = (Node *)malloc(sizeof(Node));
        if (newNode != NULL)
        {
            newNode->row = row;
            newNode->col = col;
            newNode->value = value;
            newNode->next = matrix->data[row];
            matrix->data[row] = newNode;
        }
    }
}

void printSparseMatrix(SparseMatrix *matrix)
{
    for (int i = 0; i < matrix->rows; i++)
    {
        Node *current = matrix->data[i];
        for (int j = 0; j < matrix->cols; j++)
        {
            if (current != NULL && current->col == j)
            {
                printf("%d ", current->value);
                current = current->next;
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main()
{
    SparseMatrix *matrix = createSparseMatrix(4, 5);

    insertElement(matrix, 0, 1, 2);
    insertElement(matrix, 1, 0, 3);
    insertElement(matrix, 2, 2, 5);
    insertElement(matrix, 3, 3, 7);

    printf("Sparse Matrix:\n");
    printSparseMatrix(matrix);

    return 0;
}