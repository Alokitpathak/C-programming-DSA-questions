#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

void median(int arr[], int n){
    sort(arr,arr+n);
    if(n%2==0)
    {
        int ind1 = (n/2)-1;
        int ind2 = (n/2);
        cout<<"Median is- "<<(double)(arr[ind1]+arr[ind2])/2;
    }
    else
    {
        cout<<"Median is- "<<arr[(n/2)];
    }
}

int main(){
	int n;
	cout<<"Enter size of array :- ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	median(arr,n);
	return 0;
}
