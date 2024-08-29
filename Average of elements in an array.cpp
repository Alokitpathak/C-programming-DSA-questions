#include<iostream>
using namespace std;

int average(int arr[], int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	
	int average=sum/n;
	cout<<"average of array is :- "<<average<<endl;
	
}

int main(){
	int n;
	cout<<"Enter size of array :- ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	average(arr,n);
	return 0;
}
