#include <stdio.h>


void linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d\n", i + 1);
            return;
        }
    }
    printf("Element not found\n");
}


void binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            return;
        } else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("Element not found\n");
}

int main() {
    int arr[10], n, key, choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements (sorted for binary search): ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter key to search: ");
    scanf("%d", &key);
    printf("1. Linear Search\n2. Binary Search\nEnter choice: ");
    scanf("%d", &choice);
    if (choice == 1)
        linearSearch(arr, n, key);
    else
        binarySearch(arr, n, key);
    return 0;
}
