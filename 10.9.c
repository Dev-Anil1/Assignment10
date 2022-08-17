#include<stdio.h>
#include<conio.h>
int check(int,int);
int main()
{
    int n,d,rem;
    printf("Enter values and a digit ");
    scanf("%d %d",&n ,&d);

    if(check(n,d)==1)
        printf("present");
    else
        printf("not present");
    getch();
    return 0;
}

int check(int n,int d )
{
   while(n)
   {
      int rem=n%10;
      if(rem==d)
        return 1;
      n=n/10;

   }
return 0;
}
