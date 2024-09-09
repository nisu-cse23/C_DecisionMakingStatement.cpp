#include<stdio.h>
int main(){
    int marks;

    printf("Enter the marks:");
    scanf("%d",&marks);

if(marks>=80){
    printf("Your Grade is:Distincrion");
}
else if(marks>=70){
    printf("Your Grade:Very Good");
}
else if (marks>=60){
    printf("Your Grade :Pass");
}
else{
    printf("Your Grade:Fail");
}
return 0;
}