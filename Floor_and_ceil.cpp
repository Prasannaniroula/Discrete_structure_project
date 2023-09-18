//Wap to show Floor and Ceiling function using c program
#include<stdio.h>
#include<math.h>
int main(){
	float a;
	float cval,fval;
	
	printf("Enter floating value:");
	scanf("%f",&a);
	
	fval=floor(a);
	cval=ceil(a);
	
	printf("FLoor = %f",fval);
	printf("Ceil = %f",cval);
	return 0;
}

