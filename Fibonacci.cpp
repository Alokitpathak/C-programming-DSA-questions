#include<iostream>
using namespace std;

int fib(int n)
{
	if(n<=1)
	return n;
	return fib(n-1)+fib(n-2);
}


int main(){
	int n;
	cout<<"Enter a no."<<endl;
	cin>>n;
	cout<<n<<"th fibonacci no.-  "<<fib(n);
	return 0;
}
