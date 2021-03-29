#include<stdio.h>
void main()
{
    char str[100],arr[5][10]={{'w','e','l','c','o'},{'m','e','t','o','z'},{'o','h','o','c','o'},{'r','p','o','r','a'},{'t','i','o','n','\0'}};
    int i,j,k,count1=0,count=0,i1,j1;
    scanf("%s",str);
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[i][j]==str[0])
            {
                i1=i+1;j1=j+1;
                for(k=1;k<strlen(str);k++)
                {
                    if(arr[i][j1]==str[k])
                    {
                        count++;
                        j1++;
                    }
                    if(arr[i1][j]==str[k]){
                        count1++;
                        i1++;
                    }
                }
                if(count1==2)
                {
                    printf("{%d,%d},{%d,%d}",i,j,i1-1,j);
                    break;
                }
                else if(count==2)
                {
                    printf("{%d,%d},{%d,%d}",i,j,i,j1);
                    break;
                }
            }
        }
        count=0,count1=0;
    }
}
