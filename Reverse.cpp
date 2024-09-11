#include<stdio.h>
#include<math.h>

int main(){
    int two_digit,Reversed_number;
    printf("Enter the two_digit number:");
    scanf("%d",&two_digit);

    if(two_digit>=01&&two_digit<=99){
        Reversed_number=(two_digit%10)*10+(two_digit/10);
        printf("The Reversed_number is:%d\n",Reversed_number);

    }
    else{

        printf("The number is not tw0_digit number\n");
    }
    return 0;
}