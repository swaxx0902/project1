#include<stdio.h>
int even(int a){
if(a%2==0){
   printf("even");
}
else{
   printf("odd");

}}
int main(){
    int a;
printf("enter a number");
scanf("%d",&a);
even(a);


return 0;
}
