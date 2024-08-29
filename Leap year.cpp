#include<iostream>
using namespace std;

bool isLeapyear(int n){
	if(n%400==0) return true;
	else if(n%100==0)return false;
	else if(n%4==0) return true;
	else return false;
}

int main(){
	int n;
	cout<<"Enter year - ";
	cin>>n;
	bool isLeapyear1=isLeapyear(n);
	
	isLeapyear1?cout<<"It is a leap year":cout<<"NO";
	return 0;
}
