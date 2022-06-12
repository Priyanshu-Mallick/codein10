#include <stdio.h>

int helper(int a[], int sum, int tempSum, int i, int n)
{
    if(sum == tempSum){
        return 1;
    }
    if(i>=n){
        return 0;
   }
    int recCall1 = helper(a,sum,tempSum+a[i],i+1,n);
    int recCall2 = helper(a,sum,tempSum,i+1,n);
    return recCall1 || recCall2;
}
// bool isSubset Sum(vector<int>arr,int sum){
//     // code here
//     return helper(arr,sum,0,0);
// }
int main()
{
    int n, a[10];
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the element in array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int r = helper(a,9,0,0,n);
    printf("%d",r);
    return 0;
}