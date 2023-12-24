 
 
 #include<stdio.h>
 int main(){
 	
 	int x,y,z,result;
 	printf("Enter x,y,z");
 	scanf("%d%d%d",&x,&y,&z);
 	if ((x < y && y < z) || (z < y && y < x))
 result=2;
    else if ((y < x && x < z) || (z < x && x < y))
   result=1;
    else
    result=3;
    
    printf("result: %d",result);
    return 0;
 }
 
 
