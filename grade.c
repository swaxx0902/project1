#include<stdio.h>
int main(){
int m;
printf("enter mark:");
scanf("%d",&m);
if(m>90&&m<100){
printf("A GRADE");
}
else if(m>80&&m<89){
printf("B GRADE");
}
else if(m>70&&m<79){
printf("C GRADE");
}
else if(m>60&&m<69){
printf("D GRADE");
}
else{
printf("fail");

}

return 0;
}
