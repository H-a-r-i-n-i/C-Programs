#include<stdio.h>
int main(){
	int arr[50],n,i,sum=0,max=arr[0];
printf("Enter n:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum>max)
		max=sum;
		if(sum<0)
		sum=0;
	}
	printf("Maximum Subarray Sum->%d",max);
	return 0;
}
