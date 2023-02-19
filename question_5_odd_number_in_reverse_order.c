//5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d ",i+1);
        }
    }
}