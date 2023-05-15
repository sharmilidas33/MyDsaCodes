#include<stdio.h>
int linearSearch(int arr[], int n, int element){
	for(int i=0;i<n;i++){
		if(arr[i]==element){
			return i;
		}
	}
	return -1;
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int element=9;
	int arr[]={2,5,6,8,3,9};
	int n= sizeof(arr)/sizeof(int);
	int searchIndex= linearSearch(arr,n,element);
	printf("%d is the element found at %d index \n",element,searchIndex);
	printArray(arr,n);
	return 0;
}