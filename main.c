#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Recursively sort array using bubble sort
void bubbleSort(int arr[], int size)
{
    int temp, i;

    if (size > 0)
    {
        // One pass of bubble sort
        for (i = 0; i < size; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp       = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i]     = temp;
            }
        }

        // Recursively sort the remaining elements
        bubbleSort(arr, size - 1);
    }
}

int main()
{
    int i, n;

    printf("How many numbers to generate:\n");
    scanf("%d", &n);

    int arr[n];

    // Generate random array
    srand(time(0));
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
        printf("%d\n", arr[i]);
    }

    // Sort and print
    bubbleSort(arr, n - 1);

    printf("\nSorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%4d", arr[i]);
    }

    return 0;
}
