// Move all negative elements to end

// Given an unsorted array arr[] of size n having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(arr[i] >= 0){
                ans.push_back(arr[i]);
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i] < 0){
                ans.push_back(arr[i]);
            }
        }
        for(int i=0; i<n; i++){
            arr[i] = ans[i];
        }
    }
};

