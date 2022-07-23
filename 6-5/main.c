#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,s=0;
    printf("Enter length : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s=s+i*i*i;
    printf("%d",s);
    return 0;
}
