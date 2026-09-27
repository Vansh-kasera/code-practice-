#include<stdio.h>
int main (){
    int m;
    printf("emter the no:");
    scanf("%d",m);


    if (m>0){
    printf("no is postive");
    }  else if (m<0){
        printf("no is negative");
    } else {
        printf("no is zero");
    }

    return 0;
}