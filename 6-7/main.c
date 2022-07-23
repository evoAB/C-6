#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,count=0;
    printf("Enter any number : ");
    scanf("%d",&x);
    while(1)
    {
        count++;
        x/=10;
        if(x==0)
            break;
    }
    printf("Count of digits in a given number : %d",count);
    return 0;
}
