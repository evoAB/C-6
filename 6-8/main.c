#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, flag=0;
    printf("Enter any number : ");
    scanf("%d",&x);
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            printf("It is a not a prime number.");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("It is a prime number.");
    return 0;
}

