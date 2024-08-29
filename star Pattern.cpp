#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<endl;
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
	}
	return 0;
}
