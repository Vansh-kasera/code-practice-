#include<stdio.h>
float percentage(float a, float b,float c);

int main(){
    float a,b,c;
    printf("enter the a marks");
    scanf("%f",&a);
    printf("enter the b marks:");
    scanf("%f",&b);
    printf("enter the c marks:");
    scanf("%f",&c);

    printf("Percentage=%.2f",percentage(a,b,c));
    

    return 0;

    
}
float percentage(float a, float b,float c){
    float per=(a+b+c)/3;
        return per;
    }


