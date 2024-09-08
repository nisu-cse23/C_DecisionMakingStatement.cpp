#include<stdio.h>
int main(){
    int x;

    printf("Enter the value of x:");
    scanf("%d",&x);

    if(x<10){
        printf("%d is less than 10\n",x);
        printf("Square:%d\n",x*x);
    }
    return 0;
    }
