#include<iostream>
#include<stdio.h>
#include<climits>
using namespace std;
int main(){
	
	int m;
	cout<<"Enter no. of elements in an array - ";
	cin>>m;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	int largest=arr[0];
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	cout<<"The largest element is- "<<largest;
	return 0;
}
