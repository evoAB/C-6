#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,n;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    if(x>y)
        n=x;
    else
        n=y;
    while(1)
    {
        if(n%x==0 && n%y==0)
        {
            printf("LCM of two numbers : %d",n);
            break;
        }
        n++;
    }
    return 0;
}
