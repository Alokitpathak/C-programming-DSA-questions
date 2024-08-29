#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

int maxProductSubArray(int nums[],int size) {
    int result = INT_MIN;
    for(int i=0;i<size-1;i++) {
        for(int j=i+1;j<size;j++) {
            int prod = 1;
            for(int k=i;k<=j;k++) 
                prod *= nums[k];
            result = max(result,prod);    
        }
    }
    return result;
}

int main() {
    int nums[] = {1,2,4,5,0};
    int size = sizeof(nums) / sizeof(nums[0]);
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums,size);
    return 0;
}
