#include<stdio.h>
int main(){
FILE *fp;
fp=fopen("demo23.txt","w");
char a='A';
fprintf(fp,"%c",a);
fclose(fp);
fp=fopen("demo23.txt","r");
char b;
b=fgrtc(fp);
printf("%c",b);
return 0;
}
