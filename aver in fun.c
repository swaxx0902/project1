#include<stdio.h>
float avg(int a,int b,int c,int d,int e){
int sum=a+b+c+d+e;
float avg=sum/5;
return avg;
}
int main(){
    int a,b,c,d,e,sum;
scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
printf("the average is:%.1f",avg(a,b,c,d,e));
return 0;
}
