/*Write a program to move all the zeros to the beginning. Input {1,2,3,0,0,0,4,5} Output {0,0,0,1,2,3,4,5}*/
#include<stdio.h>
void main()
{
  int n,i,*arr;
  scanf("%d",&n);
  arr=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
     scanf("%d",&arr[i]);
  }
  int count=n-1;
  for(i=n-1;i>=0;i--){
    if(arr[i]!=0)
    {

        arr[count--]=arr[i];
    }
   }
   while(count>=0)
   {
       arr[count--]=0;
   }
  for(i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  }
}
