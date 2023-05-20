#include<stdio.h>

void printArray(int *A, int n){
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
void selectionSort(int *A, int n){
	int minIndex, i, j, temp;
	printf("After running selection sort \n");
	for(i=0;i<n-1;i++){
		minIndex=i;
		for(j=i+1;j<n;j++){
			if(A[j]< A[minIndex]){
				minIndex=j;
			}
		}
		temp=A[i];
		A[i]=A[minIndex];
		A[minIndex]= temp;
	}
}
int main(){
	int A[]={3,6,2,1,4,9,8};
	int n= sizeof(A)/sizeof(int);
	printArray(A,n);
	selectionSort(A,n);
	printArray(A,n);
	return 0; 
}