#include<stdio.h>
int main(){
	int n,even=2,odd=1,i,j,space;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(space=n-1;space>=i;space--)
		{
				printf("  ");
		}
		for(j=1;j<=i;j++){
		
		if(i%2!=0)
		{
			
			printf("%d ",odd);
				odd+=2;
		}
		else
		{
		printf("%d ",even);
				even+=2;	
		}
}
		
		printf("\n");
	}
	
}
