#include<stdio.h>
int main()
{
    int principal,rate,year;
    int si=principal*rate*year;

    printf("principal \n");
    scanf("%d",&principal);

    printf("rate \n");
    scanf("%d",&rate);

    printf("year \n");
    scanf("%d",&year);

    printf("the value of si is %d",si);
    return 0;
}