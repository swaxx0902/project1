#include<stdio.h>
int main(){
int num;
printf("enter a number:");
scanf("%d",&num);
if(num>0&&num%2==0){
printf("the number is both even and positive");
}
else{
printf("it is neither even nor positive");
}
}
