#include<iostream>
using namespace std;

int fact(int n){
	if(n==1)
	return n;
	return n*fact(n-1);
}

int main(){
	int n;
	cout<<"Enter a no."<<endl;
	cin>>n;
	cout<<"Factorial of "<<n<<" is - "<<fact(n)<<endl;
	return 0;
}
