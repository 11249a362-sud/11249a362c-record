Aim:

To implement Merge Sort algorithm to sort a given list of elements in ascending order.
Algorithm:
MERGESORT(A, low, high)
1. If low < high:
2.     mid = (low + high) / 2
3.     MERGESORT(A, low, mid)
4.     MERGESORT(A, mid + 1, high)
5.     MERGE(A, low, mid, high)

Merge Procedure

MERGE(A, low, mid, high)
1. i = low
2. j = mid + 1
3. k = low
4. Create temp[] array
5. While i ≤ mid AND j ≤ high:
6.       If A[i] < A[j], temp[k] = A[i], i++
7.       Else temp[k] = A[j], j++
8.       k++
9. Copy remaining elements of left sub-array (if any)
10. Copy remaining elements of right sub-array (if any)
11. Copy temp[] to A[]
program:
#include <stdio.h>

void merge(int a[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = low;
    int temp[50];

    while (i <= mid && j <= high) {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low; i <= high; i++)
        a[i] = temp[i];
}

void mergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main() {
    int a[50], n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    mergeSort(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
Output:
Enter number of elements: 6
Enter elements: 10 50 20 5 40 30
Sorted array: 5 10 20 30 40 50
output:
Hence the quick merge program is executed successfully 