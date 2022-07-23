#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s=0,t=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(1)
    {
        if(n%10==n)
        {
            t=t*10+n;
            break;
        }
        s=n%10;
        n/=10;
        t=t*10+s;

    }
    printf("Reverse of given number : %d",t);
    return 0;
}
