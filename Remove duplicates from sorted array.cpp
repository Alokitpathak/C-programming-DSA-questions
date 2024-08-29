#include<iostream>
using namespace std;

int removeduplicates(int arr[],int n){
	int i=0;
	for(int j=1;j<n;j++){
		if(arr[i]!=arr[j]){
			i++;
			arr[i]=arr[j];
		}
	}
	return i+1;
}
int main(){
	int arr[]={1,1,2,2,2,3,3,4,5,6,7,7,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k= removeduplicates(arr,n);
	cout<<"Array after removing duplicates are:- ";
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
