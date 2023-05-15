#include<stdio.h>
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void heapify(int arr[], int n, int i){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n && arr[left]>arr[largest]){
		largest=left;
	}
	if(right<n && arr[right]>arr[largest]){
		largest=right;
	}
	if(largest!=i){
		swap(&arr[i],&arr[largest]);
		heapify(arr,n,largest);
	}
}
void heapSort(int arr[], int n){
	for(int i=n/2-1;i>=0;i--){
		heapify(arr,n,i);
	}
	for(int i=n-1;i>=0;i--){
		swap(&arr[i],&arr[0]);
		heapify(arr,i,0);
	}
}
int main(){
	int arr[]={66,80,65,43,21,64};
	int n=sizeof(arr)/sizeof(int);
	printArray(arr,n);
	heapSort(arr,n);
	printArray(arr,n);
	return 0;
}