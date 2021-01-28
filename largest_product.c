/*Write a program to sort the array based upon the number of prime factors*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
  	int i,j,n,arr[100],temp;
  	scanf("%d", &n);
  	if(n<3){
        printf("No triplet");
        exit;}
  	for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
  	}
  	for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }
   }

	int max1=arr[0] * arr[1] * arr[n - 1];
	int max2=arr[n - 1] * arr[n - 2] * arr[n - 3];
	if(max1>max2)
        printf("%d",max1);
    else
        printf("%d",max2);
}


