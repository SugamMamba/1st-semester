#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter value of n\n");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum=%d",sum);
    getch();
}