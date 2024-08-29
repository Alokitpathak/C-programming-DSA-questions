#include<iostream>
#include<vector>
using namespace std;

void rotateArray(int arr[], int n, int k){
	vector<int> temp;
	for(int i=0;i<k;i++){
		temp.push_back(arr[i]);
	}
	for(int i=k;i<n;i++){
		arr[i-k]=arr[i];
	}
	for(int i=0;i<k;i++){
		arr[n-k+i]=temp[i];
	}
}

void printarray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


int main(){
	int n;
	cout<<"Enter size of array :- ";
	cin>>n;
	int k;
	cout<<"Enter the value of k:- ";
	cin>>k;
	int arr[n];
	cout<<"Enter elements of array :- ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	rotateArray(arr,n,k);
	cout<<"Array after k rotation is:- ";
	printarray(arr,n);
	return 0;
}
