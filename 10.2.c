#include<stdio.h>
#include<conio.h>
float si(int,int,int);
int main()
{
    int p,r,t;
    float Si;
    printf("Enter p,r,t\n");
    scanf("%d%d%d",&p,&r,&t);
    Si=si(p,r,t);
    printf("simple intrest is %f",Si);
    return 0;
}

float si(int p,int r,int t)
{
    return (p*r*t/100);
}
