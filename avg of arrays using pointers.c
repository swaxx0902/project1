#include <stdio.h>
int main() {
    int n;
    float sum = 0.0, average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

    int *ptr = arr;
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    average = sum / n;
    printf("Average of array elements: %.2f\n", average);
    return 0;
}
