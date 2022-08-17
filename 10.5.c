#include<stdio.h>
#include<conio.h>
void printOdd(int);
int main()
{
    int n;
    printf("Enter value");
    scanf("%d",&n);
    printOdd(n);
    getch();
    return 0;
}

void printOdd(int a)
{
    int i;
    for(i=1;i<=a;i++)
        printf("%d ",2*i-1);
}
