#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);

    switch(x)
    {
        case 1:printf("one");

        case 2:printf("Two");

        case 3:printf("Three");
               break;
        case 4:printf("Four");

        case 5:printf("Five");
        
        case 6:printf("six");


    }
    return 0;
}