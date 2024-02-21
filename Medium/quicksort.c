#include <stdio.h>

int partition(int arr[], int low, int high)
{
    // Middle element of the array
    int pivot = arr[(low + high) / 2];

    int lesser = low;
    int equal = low;
    int greater = high;

    while (equal <= greater)
    {
        if (arr[equal] < pivot)
        {
            // Swap them out
            arr[equal] = arr[lesser];
            // Increase lesser
            lesser += 1;
            equal += 1;
        }
        else if (arr[equal] > pivot)
        {
            arr[equal] = arr[greater];
            greater += 1;
        }
        else if (arr[equal] == pivot)
        {
            equal += 1;
        }
    }

    return lesser, greater;
}

void quickSort(int arr[], int low, int high)
{
    if (low > 0 && low < high)
    {
        int lesser, greater = partition(arr, low, high);
        quicksort(arr, low, lesser - 1);
        quicksort(arr, greater + 1, high);
    }
    return;
}