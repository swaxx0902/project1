#include <stdio.h>

int main() {
int n, i;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements of the array:\n");
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("Even numbers in the array: ");
for (i = 0; i < n; i++) {
if (arr[i] % 2 == 0) {
printf("%d ", arr[i]);
}
}
printf("\nOdd numbers in the array: ");
for (i = 0; i < n; i++) {
if (arr[i] % 2 != 0) {
printf("%d ", arr[i]);
}
}
return 0;
}
