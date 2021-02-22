#include<stdio.h>
void main()
{
    int n,i,j,k,arr[100][100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==j){
                for(k=i;k<=n;k++)
                {
                    arr[i][k]=(n+1)-i;
                    printf("%d ",arr[i][k]);
                }
            }
            else{
                arr[i][j]=arr[i-1][j];
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
}
