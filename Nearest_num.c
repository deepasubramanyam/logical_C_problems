/******************************************************************************
Nearest bigger element 
Input:
8
-3 -4 10 0 3 -2 15 3
To find near biggest num for:0
Output:3
*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[100],i,n,num,temp=99999;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]>num && temp>arr[i])
        {
            temp=arr[i];
        }
    }
    printf("%d",temp);
    return 0;
}
