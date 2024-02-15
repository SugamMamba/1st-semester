#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,a;
    printf("Enter the number\n");
    scanf("%d",&num);
    a=num/2;
    for (i=2;i<a;i++)
    {
        if (num%2==0)
        {
            printf("%d is not prime number\n",num);
        }
        else
        {
         printf("%d is a prime number\n",num);
        }
        {
            break;
        }
    }
    printf("%d is not a prime number\n",num);
    getch();
}