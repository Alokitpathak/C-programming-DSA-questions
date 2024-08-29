#include<iostream>
#include<climits>
using namespace std;

int main(){
	int m;
	cout<<"Enter no. of elements in an array -";
	cin>>m;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	int largest=INT_MIN;
	int s_largest=0;
	for(int i=0;i<m;i++){
		if(arr[i]>largest&&arr[i]<s_largest)
		s_largest=arr[i];
	}
	cout<<s_largest;
	return 0;
}
