#include <stdio.h>

int main()
{
  	int i, j, n,arr[100],pr_f[100],isPrime=0,k;
  	scanf("%d", &n);
  	for(i=0;i<n;i++)
  	{
  	    scanf("%d",&arr[i]);
  	    pr_f[i]=0;
  	}
/*find count of prime factors*/
 for(i=0;i<n;i++){
  	for (j= 2; j <= arr[i]; j++)
   	{
     	if(arr[i] % j== 0)
        {
   			isPrime = 1;
			for (k= 2; k<= j/2; k++)
			{
				if(j % k == 0)
				{
					isPrime = 0;
					break;
				}
			}
			if(isPrime == 1)
			{
			   pr_f[i]++;
			}
		}
   }
 }
 /*sorting*/
 for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(pr_f[i]>pr_f[j]){
                pr_f[i]=pr_f[i]^pr_f[j];
                pr_f[j]=pr_f[i]^pr_f[j];
                pr_f[i]=pr_f[i]^pr_f[j];

                arr[i]=arr[i]^arr[j];
                arr[j]=arr[i]^arr[j];
                arr[i]=arr[i]^arr[j];
         }
      }
 }

   for(i=0;i<n;i++)
   {
       printf("%d,",arr[i]);
   }
  return 0;
}
