#include<stdio.h>
int multiply(int n);


int main (){
    int n;
    printf("enter the factorial no.");
    scanf("%d",&n);
    printf("%d",multiply(n));
    return 0;
}
int multiply(int n){
    if (n==1){
    return 1;
    }

    int fact=multiply(n-1);
    int factorial=fact*n;
    
     return factorial;
}
     
