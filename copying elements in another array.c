#include <stdio.h>

int main() {
int n, i;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int arr1[n],arr2[n];
printf("Enter the elements of the array:\n");
for (i = 0; i < n; i++) {
scanf("%d", &arr1[i]);
}
for (i = 0; i < n; i++) {
arr2[i] = arr1[i];
}
printf("elements in array 2:\n");
for ( i = 0; i < n; i++) {
printf("%d ", arr2[i]);
}
return 0;
}
