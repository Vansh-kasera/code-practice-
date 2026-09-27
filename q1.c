#include<stdio.h>

void square(int n);

int main(){
    int  n;
    printf("enter the no:");
    scanf("%d" ,& n);

    square(n);
    return 0;
}

void square (int n){
    printf("Square=%d",n*n);
}

