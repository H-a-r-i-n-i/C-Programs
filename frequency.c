#include<stdio.h>
int main()
{
	int arr[50],i,n,count;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		{
			if(count>1)
			  printf("\n%d->%d",arr[i],count);
	      break;
		}
		if(arr[i]!=arr[i+1]){
			   if(count!=1)
			    	printf("%d->%d",arr[i],count);
			count=1;
		}
	
		else
		count++;
	}
	return 0;
}
