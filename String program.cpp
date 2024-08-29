#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string s;
	cout<<"Enter a string"<<endl;
	cin>>s;
	int n=s.length();
	int left=0;
	int right=n;
	while(left<right){
			if(s[left]!=s[right]){
			cout<<"No"<<endl;
			}
		left++;
		right--;
		break;
		}
			cout<<"Yes"<<endl;
	return 0;
}

