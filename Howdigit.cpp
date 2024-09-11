#include<stdio.h>
int main(){
    int digit;

    printf("Enter three digit number:");
    scanf("%d",&digit);

    if(digit>=100 && digit<=999){
        printf("%d has three digit\n",digit);

    }
    else{
        printf("The given number is not three digit\n ");
    }
    return 0;
}