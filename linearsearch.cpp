#include<stdio.h>
int linearSearch(int arr[],int size,int key){
	if(size==0){
		return -1;
	}
	if(arr[size-1]==key){
		return size -1;
	}
	return linearSearch(arr,size-1,key);
}
int main(){
	int arr[]={5,15,6,4,9};
	int key=4;
	int index= linearSearch(arr,sizeof(arr)/sizeof(int),key);
	if(index==-1){
		printf("key not found in the array.\n");
	}
	else{
		printf("the element %d is found at %d index of the given array\n",key,index);
		
	}
	return 0;
}
