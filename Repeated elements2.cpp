#include<iostream>
#include<algorithm>
using namespace std;

int repeatedelements(int arr[], int n){
	sort(arr, arr+n);
	for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1])   cout<<"Repeated elememts are:- "<<arr[i]<<" ";
			while(i<n-1&&arr[i]==arr[i+1]){
				++i;
			}
	}
	
}
int main(){
	int n;
	cout<<"Enter size of array :- ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements in array :- ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	repeatedelements(arr,n);
	return 0;
}
