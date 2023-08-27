// 1. To insert and delete elements from appropriate position in an array.

#include <stdio.h>

void insert(int arr[], int *size, int index, int value)
{
    if (*size >= index)
    {
        for (int i = *size; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[index] = value;
        (*size)++;
    }
}

void delete(int arr[], int *size, int index)
{
    if (*size > 0 && index >= 0 && index < *size)
    {
        for (int i = index; i < *size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        (*size)--;
    }
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;

    insert(arr, &size, 2, 10);
    delete (arr, &size, 3);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}