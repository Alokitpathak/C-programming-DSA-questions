#include<iostream>
#include<climits>
using namespace std;

int findlargest(int arr[], int n, int &largest , int &s_largest){
	largest=INT_MIN;
	s_largest=INT_MIN;
	
	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			s_largest=largest;
			largest=arr[i];
		}
		else if(arr[i]>s_largest&&arr[i]!=largest){
			s_largest = arr[i];
		}
	}
	return largest , s_largest;
}

int main(){
	int n;
	cout<<"Enter size of array:- ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int largest ,s_largest;
	findlargest(arr,n,largest, s_largest);
	
	cout<<"Largest element in array is - "<<largest<<endl;
	cout<<"S_largest element in array is - "<<s_largest<<endl;
	
	return 0;
}
