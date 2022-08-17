#include<stdio.h>
#include<conio.h>
int evenodd(int);
int main()
{
    int a;
    printf("Enter a number to check =");
    scanf("%d",&a);
    if(evenodd(a))
        printf("even");
    else
        printf("odd");
    return 0;
}

int evenodd(int a)
{
    if(a%2==0)
        return 1;
   else
        return 0;
}
