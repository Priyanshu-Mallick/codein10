#include <stdio.h>

int fibo(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    printf("Enter the nth stair\n");
    scanf("%d",&n);
    int r = fibo(n);
    printf("There are %d numbers of way to reach %d th stair",r,n);
    return 0;
}