#include<stdio.h>

void circle(int m);
void square(int n);


int main(){
    int m,n;
    printf("enter the value :");
    scanf("%d %d" , &m, &n);
    
    circle (m);
    square (n);
    return 0;


}

void circle (int m){
    printf("area=%d \n",3*m*m);
}

void square(int n){
    printf("area=%d \n", n*n);
}

