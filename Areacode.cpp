#include<stdio.h>
int main(){
    int areacode;
    printf("Enter the value of area code:");
    scanf("%d",&areacode);

    switch(areacode)
    {
        case 229:printf("Albany");
                 break;
        case 404:printf("Atlanta");
                 break;
        case 470:printf("Atlanta");
                 break;
        case 478:printf("Macon");
                 break;
        case 678:printf("Atlanta");
                 break; 
        case 706:printf("Coulombus");
                 break; 
        case 762:printf("Coulombus");
                 break;
         case 770:printf("Atlanta");
                  break;
         case 912:printf("Savannah");
                  break;
        default  :printf("ARea code don't recognized");
                                                                               
    }
    return 0;
}