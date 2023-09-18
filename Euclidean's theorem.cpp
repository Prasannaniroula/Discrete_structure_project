//Wap to implement euclidean's theorem
#include<stdio.h>
int gcd(int a,int b){
	if(a==0){
		return b;
	}
	else{
		return gcd(b%a,a);
	}
}
int main(){
	int a,b;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("The GCD of %d and %d is: %d",a,b,gcd(a,b));
	return 0;
}
