#include<iostream>
#include<vector>
using namespace std;

void rotatearray(int arr[],int n, int k){
	k=k%n;
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

void printarray(int arr[],int n){
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
	rotatearray(arr,n,k);
	cout<<"Array after k rotation :- ";
	printarray(arr,n);
	
	return 0;
}
