#include<stdio.h>
int main(){
int arr[6]={1,2,3,4,5,6};
int target;
int left=0,right=5,mid;
scanf("%d",&target);
int found=0;
while(left<=right){
mid=left+right-left/2;
if(target==arr[mid]){
found =1;
break;
}
if(target<arr[mid]){
right=mid-1;
}
if(target>arr[mid]){
left=mid+1;
}}
if(found==0){
printf("not found");
}
else{
printf("found at index %d",mid);
}
return 0;

}
