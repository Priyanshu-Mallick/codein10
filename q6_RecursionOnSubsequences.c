#include <stdio.h>
#include <string.h>
void helper(char s[], char tempAns[],int index)
{
    int size = strlen(s);
    if(size == index)
    {
        printf("%s\t",tempAns);
        return;
    }
    // take
    helper(s, tempAns + s[index],index+1);
    // not take
    helper(s,tempAns,index+1);
    return;
}
char AllPossibleStrings(char s[])
{
    // Code here
    char ans;
    helper(s,"",0);
    return ans;
}
int main()
{
    char str[10];
    printf("Enter a string\n"); 
    scanf("%s",str);
    AllPossibleStrings(str);   
    return 0;
}