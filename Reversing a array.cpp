#include<iostream>
using namespace std;

int reverse(int arr[],int n){
	int start=0;
	int end=n-1;
	
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		
		start++;
		end--;
	}
	
}

void printarray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" "<<endl;
		
	}
	cout<<endl;
}

int main(){
	int n;
	cout<<"Enter size of array - ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements in array :- ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	reverse(arr,n);
	cout<<"reversed array is- "<<endl;
	printarray(arr,n);
	
	return 0;
}
