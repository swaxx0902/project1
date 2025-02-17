#include<stdio.h>
int main(){
int i;
int arr[5];
printf("enter 5 numbers :");
scanf("%d",&arr[0]);
scanf("%d",&arr[1]);
scanf("%d",&arr[2]);
scanf("%d",&arr[3]);
scanf("%d",&arr[4]);
for(i=0;i<5;i++){
printf("%d\t",arr[i]);
}
return 0;
}
