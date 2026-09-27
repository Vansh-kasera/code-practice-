#include<stdio.h>
int main(){
    int m;
    printf("emter the no:");
    scanf("%d", &m);

    if (m>=90){
    printf("Grade A");
    }
else if (m>=75&& m<90){
    printf("Grade B");
} else if(m>=50 && m<75){
    printf("Grade c");
} 
else 
    printf("Grade D");
return 0;
}
