#include<iostream>
using namespace std;

int sum(int arr[], int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	cout<<"sum of array is :- "<<sum;
}

int main(){
	int n;
	cout<<"Enter size of array :- ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array :- ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sum(arr,n);
	return 0;
}
