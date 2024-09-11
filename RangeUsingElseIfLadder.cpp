#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);

    if(x==1){
        printf("One");
    
    }
    else if (x==2){
        printf("Two");
    }
    else if(x==3){
        printf("Three");
    }
    else{
        printf("Out of range 1-3");
    }
    return 0;
}