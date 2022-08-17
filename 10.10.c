#include<stdio.h>
#include<conio.h>
int main()
{
    int p;
    printf("Enter a number ");
    scanf("%d",&p);
    primeFactor(p);
    return 0;
}

void primeFactor(int p)
{
    int i;
    for(i=2;p!=1;i++)
    {
        for(;p%i==0;)
        {
            p=p/i;
            printf("%d,",i);
        }
    }
}
