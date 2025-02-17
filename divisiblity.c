#include<stdio.h>
int main(){
int num;
printf("enter a number:");
scanf("%d",&num);
if(num%2==0&&num%3==0){
printf("the given number is divisible by 2 and 3 ");
}
else if(num%2==0||num%3==0){
printf("the given number is divisible either by 2 or 3");
}
else{;
printf("the given number is not divisible by 2 or 3 ");
}
return 0;
}
