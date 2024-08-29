#include<iostream>
using namespace std;

int main(){
	int n1,n2;
	cout<<"Enter two no.s"<<endl;
	cin>>n1>>n2;
	int x;
	cout<<"The value of n1 is - "<<n1<<" and n2 is - "<<n2<<endl;
	x=n1;
	n1=n2;
	n2=x;
	cout<<"After swapping - n1 is "<<n1<<" and n2 is - "<<n2<<endl;
	return 0;  
} 
