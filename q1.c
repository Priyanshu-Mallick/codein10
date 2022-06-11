#include <stdio.h>

int p(int n)
{
    if(n==1)
        return 2;
    return 2*p(n-1);
}
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int r = p(n);
    printf("%d",r);
    return 0;
}