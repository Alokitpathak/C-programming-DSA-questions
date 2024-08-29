#include<iostream>
#include<map>
using namespace std;
class removeduplicates{
	public:
	void duplicates(int arr[], int n){
		map<int,int> mp;
		for(int i=0;i<n;i++){
			if(mp.find(arr[i])==mp.end()){
				cout<<arr[i]<<" ";
				mp[arr[i]]++;
			}
		}
	}
};

int main(){
	int arr[]={11,2,3,12,33,42,23,2,3,11,2,3,2,2,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	removeduplicates d1;
	d1.duplicates(arr,n);
	return 0;
	
	
}
