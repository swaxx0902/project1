#include <stdio.h>


int binarySearch(int arr[], int low, int high, int target) {
    if (high >= low) {
        int mid = low + (high - low) / 2;


        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] > target) {
            return binarySearch(arr, low, mid - 1, target);
        }
        return binarySearch(arr, mid + 1, high, target);
    }
    return -1;
}

int main() {
    int n, target, result;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in ascending order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element to search for: ");
    scanf("%d", &target);
    result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Element is present at index %d\n", result);
    } else {
        printf("Element is not present in the array\n");
    }

    return 0;
}
