#include <stdio.h>

// vector<vector<int >> ans;
void helper(int nums[],int i, int n){
    if(i==n){
        // ans.push_back(nums);
        return;
   }
    for(int j=i;j<n;j++){
        swap(nums[1],nums[j]);
        helper(nums,i+1,n);
       // backtrack
        swap(nums[i],nums[j]);
   }
    return;
}
// vector<vector<int >> permute(vector<int>&nums){
//     helper(nums,0);
//    return ans;
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
    int r = helper(a,0,n);
    printf("%d",r);
    return 0;
}