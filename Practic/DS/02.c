// 2. To search an element and print the total time of occurrence in the array.

#include <stdio.h>

int search(int arr[], int size, int target, int *count)
{
    *count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            (*count)++;
        }
    }
    return (*count);
}

int main()
{
    int arr[100] = {2, 4, 6, 4, 8, 4, 10};
    int size = 7;
    int target = 4;
    int count;

    int occurrences = search(arr, size, target, &count);

    printf("Total occurrences of %d: %d\n", target, occurrences);
    printf("Total time of occurrence: %d\n", count);

    return 0;
}