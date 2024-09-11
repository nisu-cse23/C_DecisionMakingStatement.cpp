#include<stdio.h>
int main(){
    //MM=Marks of math
    //MP=marks of physics
    //MC=marks of chemistry
    //MA=marks of All
    //MMP=marks of math and physics

    int MM,MP,MC,MA,MMP;

    printf("Enter the value of MM,MP and MC:");
    scanf("%d%d%d",&MM,&MP,&MC);

    if(MM>=60&&MP>=50&&MC>=40&MA>=200){
        printf("The candidate is eligible\n");
    }
    else if(MMP>=150){

        printf("The candidate is eligible\n");
    }
    else{
        printf("The candidate is not eligible\n");
    }
    return 0;

}