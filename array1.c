#include<stdio.h>
int main(){
int size;
printf("enter the size:");
scanf("%d",&size);
int arr[size]; int i;
for(i=0;i<size;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<size;i++);
printf("%d\t",arr[i]);

return 0;
}
