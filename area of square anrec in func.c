#include<stdio.h>
int rec(int l,int b){
int area=l*b;
printf("the area of rectangle is :%d",area);
}
int sq(a){
int area=a*a;
printf("the area of square is:%d",area);
}
int main(){
    int l,b,a;
printf("length and breath of rectangle:");
scanf("%d %d",&l,&b);
rec(l,b);
printf("\nside of square");
scanf("%d",&a);
sq(a);
return 0;
}
