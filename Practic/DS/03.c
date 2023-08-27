// 3. To delete all occurrence of an element in an array.

#include <stdio.h>

void deleteOccurrences(int arr[], int *size, int target)
{
    int newSize = 0;
    for (int i = 0; i < *size; i++)
    {
        if (arr[i] != target)
        {
            arr[newSize++] = arr[i];
        }
    }
    *size = newSize;
}

int main()
{
    int arr[100] = {2, 4, 6, 4, 8, 4, 10};
    int size = 7;
    int target = 4;

    deleteOccurrences(arr, &size, target);

    printf("Array after deleting all occurrences of %d:\n", target);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}