#include<stdio.h>
    int main()
    {
        int radius;
        float pi;
        int area=pi*radius*radius;

        printf("radius of circle \n");
        scanf("%d",&radius);

        printf("pi of circle \n");
        scanf("%f",&pi);

        printf("area of circle is %f",area);
        return 0;
    }