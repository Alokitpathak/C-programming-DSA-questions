#include<iostream>
#include<climits>
using namespace std;

int findsmallest (int arr[] , int n , int &smallest , int &s_smallest){
	smallest= INT_MAX;
	s_smallest=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<smallest){
		s_smallest=smallest;
		smallest=arr[i]; 
	}
	else if(arr[i]<s_smallest&&arr[i]!=smallest)
	{
		s_smallest=arr[i];
	}
	}
	return smallest,s_smallest;
}

int main(){
	int n;
	cout<<"Enter size of array - ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int smallest,s_smallest;
	findsmallest(arr, n, smallest,s_smallest);
	
	cout<<"smallest element is - "<<smallest;
	cout<<endl;
	cout<<"s_smallest element is - "<<s_smallest;
	
	return 0;
}
