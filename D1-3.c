#include<stdlib.h>
 #include<stdio.h>
 int main(){
 	
 	int days,hours,workers,total_hours,remaining;
 	printf("Enter hours,days,workers");
 	scanf("%d%d%d",&hours,&days,&workers);
 	days=days-(days*0.1);
 	total_hours=days*workers*(10);
 	remaining=hours-total_hours;
 	if(remaining<0)
 	remaining*=-1;
 	remaining=abs(remaining);
 	if(hours>total_hours){
 	printf(	"Not enough time!%d hours needed",remaining);
	 }
 	else
 	printf(	"Yes!%d hours left.",remaining);
 	
 	   return 0;
 }
