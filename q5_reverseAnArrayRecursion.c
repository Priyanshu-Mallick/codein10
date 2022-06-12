#include <stdio.h>

int rev(int a[], int s, int e)
{
    int t;
    if(s>=e)
        return a[s];
    if(s<=e)
        t = a[s];
        a[s] = a[e];
        a[e] = t;
    return rev(a, s+1, e--);
}
int main()
{
    int arr[10];
    int n, s, e;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    s = 0; e =n;
    printf("Enter the element in array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int r;
    while (n!=0)
    {
        r = rev(arr, s, e);
        printf("%d ",r);
        n--;
    }
    
    
    return 0;
}