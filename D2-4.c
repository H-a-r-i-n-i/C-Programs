#include <stdio.h>
int main() {
	
	char shape;
	float size,area;
	printf("Enter S for square ,C for circle");
	shape=getchar();
	printf("Enter size:");
	scanf("%f",&size);
	switch(shape){
		case 'S':
			area=size*size;
			break;
		case 'C':
			area=3.14*size*size;
			break;
		default:
		break;			
	}
	
	printf("Area=%.2f",area);
	return 0;
}
