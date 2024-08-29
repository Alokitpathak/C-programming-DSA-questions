#include<iostream>
#include<algorithm>
using namespace std;

int symmetricPairs(int arr[][],int m , int n){
	for(int i=0;i<m;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j][0]==arr[i][1]&&arr[j][1]==arr[i][0]){
				cout<<"("<<arr[i][1]<<" "<<arr[i][0]<<")"<<" ";
				break;
			}
		}
	}
	return 0;
}

int main(){
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	cout<<"Enter array:- ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	
	symmetricpairs(arr,m,n);
	return 0;
}
