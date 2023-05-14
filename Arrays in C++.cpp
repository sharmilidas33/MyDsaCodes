//DECLARING AN ARRAY.
#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6};
	int n=5;
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<",";
	}
	cout<<endl;
	cout<<arr[1]<<endl;
}

//ARRAY WITH FUNCTION.
#include<iostream>
using namespace std;
void printArray(int arr[], int n){
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<",";
	}
	cout<<endl;
	cout<<arr[1]<<endl;
}
int main(){
	int arr[]={6,7,8,3,4,6,9};
	int n=sizeof(arr)/sizeof(int);
	printArray(arr,n);
	cout<<n<<endl;
}

//Character array.
#include<iostream>
using namespace std;
void printArray(char ch[], int n){
	for(int i=0;i<=n;i++){
		cout<<ch[i]<<",";
	}
	cout<<endl;
	cout<<ch[1]<<endl;
}
int main(){
	char ch[]={'a','b','c','d'};
	int n=sizeof(ch)/sizeof(char);
	printArray(ch,n);
	cout<<n<<endl;
}

//Max element & Min element of array.
#include<iostream>
using namespace std;
int getMinMax(int arr[],int n){
	int max= arr[0], min= arr[0];
	for(int i=1;i<=n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<"Maximum value is "<<max<<endl;
	cout<<"Minimum value is "<<min<<endl;	
}
int main(){
	int n=6;
	int arr[100]={6,7,8,9,4,66,78};
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	getMinMax(arr,n);
	return 0;
}

//SCOPE.
#include<iostream>
using namespace std;
void update(int arr[], int n){
	arr[0]=120;  
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[]={4,6,8,10,4,6,2};
	int n=6;
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	update(arr,n);
}

//Sum of all elements in an array.
#include<iostream>
using namespace std;
int findSum(int arr[], int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	cout<<"Sum of the elements are "<<sum<<endl;
}
int main(){
	int arr[]={2,3,4,5};
	int n=4;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	findSum(arr,n);
} 

