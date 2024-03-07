#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);
    
    if(marks>45){
        printf("passed");
    }
    else{
        printf("Fail");
    }
    return 0;
}