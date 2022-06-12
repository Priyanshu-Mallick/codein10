#include <stdio.h>
#include <string.h>
int pali(char a[], int s, int e)
{
    if(s>=e)
        return 1;
    if(a[s]!=a[e])
        return 0;
    return pali(a, s+1, e-1);
}
int main()
{
    char st[10];
    int s, e, n;
    printf("Enter a string\n");   
    scanf("%s",st);

    n = strlen(st);
    s = 0; e = n-1;
    int r = pali(st, s, e);
    if(r==1)
        printf("The string is palindrum\n");
    else
        printf("The string is not palindrum\n");
    return 0;
}