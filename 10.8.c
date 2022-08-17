#include<stdio.h>
#include<conio.h>
int fact(int);
int permutation(int,int);
int main()
{
    int n,p,r,P;
    printf("Enter the two values ");
    scanf("%d%d",&n,&r);
    P=permutation(n,r);
    printf("%d",P);
    getch();
    return 0;
}

int fact(n)
{
    int i,f;
    for(i=1,f=1;i<=n;i++)
        f=f*i;
    return f;
}

int permutation(int n,int r)
{
    if(r>=0 && r<=n)
    {
        int p=fact(n)/fact(n-r);
        return p;
    }
    else
        printf("Invalid");
}
