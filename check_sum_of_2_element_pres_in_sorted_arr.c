#include<stdio.h>
void main()
{
    int arr[100],i,j,n,N,count=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&N);
    for(i=0;i<n;i++)
    {
        if(arr[i]<N)
        {
            count++;
        }
    }
    count--;
    for(i=0,j=count;i<j;)
    {
        if(arr[i]+arr[j]==N)
        {
            printf("true");
            c=1;
            break;
        }
        else if(arr[i]+arr[j]>N)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if(c==0)
        printf("false");
}
