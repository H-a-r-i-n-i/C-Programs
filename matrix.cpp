#include<stdio.h>
int main(){
	int m,n,i,j,arr[50][50];
		printf("Enter row size:");
	scanf("%d",&m);
		printf("Enter column size:");
	scanf("%d",&n);
			printf("Enter %d elements:",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
			printf("%d * %d Matrix\n",m,n);
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
