#include<stdio.h>
#include<conio.h>
float area(float);
int main()
{
    float r;
    float a;
    printf("Enter the radius of circle");
    scanf("%f",&r);
    a=area(r);
    printf("%f is area",a);
    return 0;
}

float area(float r)
{
    return (3.14*r*r);
}


