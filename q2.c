#include <stdio.h>

int fibo(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    printf("Enter the value of n in 'nth' term\n");
    scanf("%d",&n);
    int r = fibo(n);
    printf("%d",r);
    return 0;
}