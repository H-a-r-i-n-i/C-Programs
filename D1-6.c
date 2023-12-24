#include<stdio.h>
int main()
{
int coef[10],x=0,n=0,i,result=0,power,ans;
printf("Enter degree of the polynomial:");
scanf("%d",&n);
printf("\nEnter coeeficients");
for(i=0;i<=n;i++)
{
	scanf("%d",&coef[i]);
}
printf("Enter x value:");
scanf("%d",&x);
power=n;
/* Multiplying the coefficients with the power of x in decreasing order*/
for(i=0;i<=n;i++){
	ans=exponent(x,power);
	result+=coef[i]*ans;
	power--;
}
printf("\nRESULT:P(%d)=%d",x,result);
return 1;
}
/*calculation of power by recursion*/
int exponent(int X, int Y) {

	if ( Y == 0 )
		return 1;
	else
		return exponent( X, Y - 1 ) * X; 

}
