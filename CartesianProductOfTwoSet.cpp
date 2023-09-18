//WAP TO PRINT A CARTESIAN PRODUCT OF TWO SET INPUT BY THE USER

#include<stdio.h>
#include<conio.h>
int main(){
	int set1[10],set2[10],set3[20],i,j,s1,s2;
	// for set 1
	printf("Enter the no. of element in set1  :");
	scanf("%d",&s1);
	printf("Enter the element in set1  :");
	for(i=0;i<s1;i++){
		scanf("%d",&set1[i]);	
	}
	// for set 2
	printf("Enter the no. of element in set2 :");
	scanf("%d",&s2);
	printf("Enter the element in set2 :");
	for(i=0;i<s2;i++){
		scanf("%d",&set2[i]);	
	}
	printf("{");
    for(i=0;i<s1;i++){
    	for(j=0;j<s2;j++){
    		printf("(%d,%d)",set1[i],set2[j]);
		}
	}
	printf("}");
}
