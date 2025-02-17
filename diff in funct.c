#include<stdio.h>
int diff(int a, int b){
int diff=a-b;
return diff;
}
int main(){
    int a,b;
printf("enter a number");
scanf("%d %d",&a,&b);
diff(a,b);
printf("%d",diff(a,b));

return 0;
}
