#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter the value of x:");
    scanf("%c",&ch);

    if(isupper(ch)){
        ch=tolower(ch);
        printf("After Conversion:%c\n",ch);

    }
    else{
        ch=toupper(ch);
        printf("After Conversion:%c\n",ch);
    }
    
    return 0;
}