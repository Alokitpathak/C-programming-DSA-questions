#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;


int main(){
	int i;
	string s;
	cout<<"Enter a string"<<endl;
	cin>>s;
    int n=s.length();
    if(s[i]!=s[n-i-1])
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
	   	return 0;
}
