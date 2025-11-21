Aim:
To implement Quick Sort algorithm to sort a list of elements in ascending order.
Algorithm:
Algorithm for Quick Sort

QUICKSORT(A, low, high)
1. If low < high:
2.     pivot_index = PARTITION(A, low, high)
3.     QUICKSORT(A, low, pivot_index - 1)
4.     QUICKSORT(A, pivot_index + 1, high)

Partition Algorithm

PARTITION(A, low, high)
1. pivot = A[low]
2. i = low + 1
3. j = high
4. repeat:
5.      while (A[i] <= pivot and i <= high)
6.            i = i + 1
7.      while (A[j] > pivot and j >= low)
8.            j = j - 1
9.      if i < j then swap(A[i], A[j])
10. until i >= j
11. swap(A[low], A[j])
12. return j
Program:
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high) {
    int pivot = a[low];
    int i = low + 1, j = high;

    while (i <= j) {
        while (a[i] <= pivot && i <= high)
            i++;
        while (a[j] > pivot && j >= low)
            j--;

        if (i < j)
            swap(&a[i], &a[j]);
    }

    swap(&a[low], &a[j]);
    return j;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main() {
    int a[50], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quickSort(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
Output:
Enter number of elements: 5
Enter elements: 25 10 65 5 40
Sorted array: 5 10 25 40 65
result:
hence the quick sorting program executed successfully 