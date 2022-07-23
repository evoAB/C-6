#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        s=s*i;
    printf("Factorial : %d",s);
    return 0;
}
