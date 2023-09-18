#include<stdio.h>
#include<conio.h>
int main(){
	int a,set1[10],set2[10],set3[20],s1,s2,ch,k=0,i,j;
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
	printf("/*Enter 1 for Union*/ \n");
	printf("/*Enter 2 for Intersection*/ \n");
	printf("/*Enter 3 for Differece*/ \n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	
 switch(ch)	{
  case 1: //Union
	for(i=0;i<s1;i++){
	   for(j=0;j<k;j++){
	   	if(set3[j]==set1[i])
	   	break;
	   }
	if(j==k)
	  {
	  	set3[k]=set1[i];
	  	k++;
		  }	
		  }
	for(i=0;i<s2;i++){
	for(j=0;j<k;j++){
		if(set3[j]==set2[i]){
		break;
	}
	}
	if(j==k){
	  set3[k]=set2[i];
	  k++;
	}
	
	}
	
	printf("Union of set1 and set2 is: \n");
	for(i=0;i<k;i++){
		printf("%d  ",set3[i]);
	}
	break;
  
  case 2:   //intersection
  	for(i=0;i<s1;i++){
		for(j=0;j<s2;j++){
			if (set1[i]==set2[j]){
			    set3[k]=set1[i];
			    k++;
			}
		}
	}
	printf("The intersection of two sets are: ");
	for(i=0;i<k;i++){
		printf("%d  ",set3[i]);
	}
      	break;
	  
    }
	return 0;		
}
