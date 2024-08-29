#include<iostream>
#include<algorithm>
using namespace std;

int nonrepeatedelements(int arr[], int n){
	sort(arr, arr+n);
    if (n > 1 && arr[0] != arr[1]) {
        cout << arr[0] << " ";
    }

    // Check elements in the middle of the array
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1]) {
            cout << arr[i] << " ";
        }
    }

    // Check the last element separately
    if (n > 1 && arr[n - 1] != arr[n - 2]) {
        cout << arr[n - 1] << " ";
    }
	
}
int main(){
	int n;
	cout<<"Enter size of array :- ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements in array :- ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	nonrepeatedelements(arr,n);
	return 0;
}
