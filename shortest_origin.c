/*Given a set of points find the one with the shortest distance from the origin*/
#include<stdio.h>
void main()
{
  int n,i,*arr,*arr1,*arr2;
  scanf("%d",&n);
  arr=(int *)malloc(n*sizeof(int));
  arr1=(int *)malloc(n*sizeof(int));
  arr2=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
    scanf("%d%d",&arr[i],&arr1[i]);
  }
  for(i=0;i<n;i++)
  {
      arr2[i]=((arr[i]*arr[i])+(arr1[i]*arr1[i]));
  }
  int max=arr2[0],index=0;
  for(i=1;i<n-1;i++)
  {
      if(max>arr2[i+1])
      {
          max=arr2[i+1];
          index++;
      }
  }
  printf("{%d,%d}",arr[index],arr1[index]);
}
