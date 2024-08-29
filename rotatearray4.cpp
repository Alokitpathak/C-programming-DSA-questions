#include<iostream>
#include<vector>
using namespace std;

void rotatearray(int arr[],int n, int k){
	k=k%n;
	vector<int> temp;
	//storing elements in temp array
	for(int i=0;i<k;i++){
		temp.push_back(arr[i]);
	}
	//shifting elements to the left
	for(int i=k;i<n;i++){
		arr[i-k]=arr[i];
	}
	//placing temp vector at the end of array
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
	cout<<"Array after k rotation:- ";
	printarray(arr,n);
	return 0;
	
}
