int fact(int);
int main()
{
    int n,f;
    printf("Enter a number ");
    scanf("%d",&n);
    f=fact(n);
    printf("%d",f);
    getch();
    return 0;
}

int fact(int n)
{
    int i,fa=1;
    for(i=1;i<=n;i++)
        fa=fa*i;
    return fa;
}
