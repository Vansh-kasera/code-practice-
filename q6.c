#include<stdio.h>
int sum(int n){
    if (n==1){
        return 1;
    }
    int m=sum(n-1);
    int h=m+n;
    return h;
}
int main(){
int  n;
printf("enter the no:");
    scanf("%d",&n);
    int h=sum(n);
    printf("Sum=%d",h);
   
    return 0;
}