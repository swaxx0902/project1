#include<stdio.h>
#include<string.h>
int main(){
char name1[40];
printf("enter your name");
gets(name1);
char name2[30]="hello";
puts(strcat(name2,name1));
}
