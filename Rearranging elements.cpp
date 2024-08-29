#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> & arr=[2,4,3,6,9,5,8,1];
	int n=arr.size();
	sort(arr.begin(), arr.end());
	
	for(int i=0;i<n/2;i++){
		cout<<arr[i]<<" ";
	}
	for(int i=n-1;i>=n/2;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
