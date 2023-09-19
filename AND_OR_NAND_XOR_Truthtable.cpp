#include<stdio.h>
#include<math.h>
int main(){
	int i,j;
	//for and gate
	printf("//The Truthtable of AND gate // \n");
	printf("Input     Output \n");
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			printf("%d  %d        %d \n",i,j,i&&j);
		}
	}
	
	//for or gate
	printf("//The Truthtable of OR gate // \n");
	printf("Input     Output \n");
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			printf("%d  %d        %d \n",i,j,i||j);
		}
	}
	
		//for NAND gate
	printf("//The Truthtable of NAND gate // \n");
	printf("Input     Output \n");
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			printf("%d  %d        %d \n",i,j,!(i&&j));
		}
	}
	
		//for NAND gate
	printf("//The Truthtable of XOR gate // \n");
	printf("Input     Output \n");
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			printf("%d  %d        %d \n",i,j,(i^j));
		}
	}
	
	
	
	return 0;
	}
