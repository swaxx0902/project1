#include<stdio.h>
int main(){
int amt;
const int a=10000;
printf("enter the amt to be withdrawed:");
scanf("%d",&amt);
if(amt>a){
printf("not available balance");
}
else{;
printf("you can withdraw");
}
return 0;

}
