#include<stdio.h>
#include<conio.h>
int fact(int);
int combinations(int,int);
int main()
{
    int n,r,C;
    printf("Enter the two values");
    scanf("%d%d",&n,&r);
    C=combinations(n,r);
    printf("%d",C);
    getch();
    return 0;
}

int combinations(int n,int r)
{
    int c;
    if(r>=0 && r<=n)
    {
        int c=(fact(n))/(fact(r)*fact(n-r));
        return c;
    }
    else
        printf("invalid");
}

int fact(int n)
{
    int i , fa;
    for(i=1,fa=1;i<=n;i++)
        fa=fa*i;
    return fa;
}
