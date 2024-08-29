#include<iostream>
#include<unordered_map>
#include<vector>
#include<stdio.h>
using namespace std;

void countfrequencies(const vector<int> &arr){
	unordered_map<int,int> freqMap;
	for(int num:arr){
		freqMap[num]++;
	}
	
	for(const auto&pair:freqMap){
		cout<<pair.first<<" appears "<<pair.second<<" times "<<endl;
	}
}


int main(){
	int n ;
	cout<<"Enter size of array- ";
	cin>>n;
	vector<int> arr(n);
	cout<<"Enter elements in array :- ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	countfrequencies(arr);
	return 0;
}
