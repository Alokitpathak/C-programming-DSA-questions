#include<iostream>
#include<string.h>
using namespace std;

string str(string s){
	int n=s.length();
	char c;
	for(int i=0;i<n/2;i++){
		c=s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=c;
	}
	return s;
}

int main(){
	string s;
	cout<<"Enter a string"<<endl;
	cin>>s;
	cout<<str(s);
	return 0;
}
