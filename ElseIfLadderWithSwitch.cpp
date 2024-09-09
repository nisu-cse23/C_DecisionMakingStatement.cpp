#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);

    switch(x)
    {
        case 1:printf("One");
               break;
        case 2:printf("Two");
               break;
        case 3:printf("Three");
               break;
        case 4:printf("Four");
               break;
        case 5:printf("Five");
               break;
       default:printf("out of range 1-5");
                                       
    }
    return 0;
}