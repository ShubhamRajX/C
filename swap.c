#include<stdio.h>
int main()
{
    int a, b, c;
    
    printf("Enter fisrt Number.");
    scanf("%d",&a);   

    printf("Enter second Number.");
    scanf("%d",&b);

    // printf("Enter third Number.");
    // scanf("%d",c);

    c = a;
    a = b;
    b = c;

    printf("%d \n",a);
    printf("%d",b);
}