// Minimize the Heights II

// Given an array arr[] denoting heights of N towers and a positive integer K.

// For each tower, you must perform exactly one of the following operations exactly once.

// Increase the height of the tower by K
// Decrease the height of the tower by K
// Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.

// You can find a slight modification of the problem here.
// Note: It is compulsory to increase or decrease the height by K for each tower. After the operation, the resultant array should not contain any negative integers.

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr+n);
        
        int ans = arr[n-1] - arr[0];
        int smallest = arr[0] + k;
        int largest = arr[n-1] - k;
        int mini;
        int maxi;
        for(int i=0; i<n-1; i++){
            mini = min(smallest, arr[i+1]-k);
            maxi = max(largest, arr[i]+k);
            if(mini < 0){
                continue;
            }
            ans  = min(ans, maxi-mini);
        }
        return ans;
    }
};