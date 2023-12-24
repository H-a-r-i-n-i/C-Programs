#include<stdio.h>
int main()
{
	int arr[50],n,i,place=1,num=0,res[50],rem,temp=0,digit=0,size=0;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	
	}
	
	for(i=n-1;i>=0;i--){
			num+=arr[i]*place;
		place*=10;
		temp++;
	}
	

		num+=1;
		temp=num;
		while(temp>0){
			temp=temp/10;
			digit++;
		}
size=digit;
digit=digit-1;
	while(num>0){
		rem=num%10;
		res[digit--]=rem;
		num=num/10;
		
	}
	printf("Resultant Array:");
	for(i=0;i<size;i++)
	{
		printf("%d ",res[i]);	
	}
	return 0;
}
