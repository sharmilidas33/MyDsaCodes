#include<stdio.h>
int binarySearch(int arr[],int n,int element){
	int low= 0;
	int high= n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==element){
			return mid;
		}
		if(arr[mid]<element){
			low = mid+1;
		}
		if(arr[mid]>element){
			high= mid-1;
		}
	}
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int element=6;
	int arr[]={2,3,4,5,6,7,8,9};
	int n= sizeof(arr)/sizeof(int);
	int searchIndex= binarySearch(arr,n,element);
	printf("%d is the element found at %d index \n",element,searchIndex);
	printArray(arr,n);
	return 0;
}