#include<stdio.h>
int main(){
    float income,Tax;
    printf("Enter the value of Income:");
    scanf("%f",&income);

    if(income>7,000){
        Tax=230+(0.06*7000);
        printf("The Tax:%.2f\n",Tax);

    }

    else if(income>=5250){
        Tax=142.50+(0.05*5250);
        printf("The Tax:%.2f\n",Tax);
    }

    else if(income>=3750){
        Tax=82+50+(.04*3750);
        printf("The Tax:%.2f\n",Tax);

    }
    else if(income>=2250){
        Tax=37.50+(0.03*2250);
        printf("The Tax:%.2f\n",Tax);
        
    }
    else if(income>=750){
        Tax=7.50+(0.02*750);
        printf("The Tax:%.2f\n",Tax);
    }
    else{
        Tax=0.01*750;
        printf("The Tax:%.2f\n",Tax);
    }
    return 0;
}