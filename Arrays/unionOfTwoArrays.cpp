// Union of two arrays

// Given two arrays a[] and b[] of size n and m respectively. The task is to find the number of elements in the union between these two arrays.

// Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

// Note : Elements are not necessarily distinct

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        vector<int> v;
        if(n > m){
            for(int i=0; i<n; i++){
                v.push_back(a[i]);
            }
            for(int i=0; i<m; i++){
                if(a[i] == b[i]){
                    continue;
                }
                else{
                    v.push_back(b[i]);
                }
            }
        }
        else{
            for(int i=0; i<m; i++){
                v.push_back(b[i]);
            }
            for(int i=0; i<n; i++){
                if(a[i] == b[i]){
                    continue;
                }
                else{
                    v.push_back(a[i]);
                }
            }
        }
        sort(v.begin(), v.end());
        auto it = unique(v.begin(), v.end());
        v.erase(it, v.end());
        
        return v.size();
    }
};


// 2nd approach using stack

//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        set<int> st;
        for(int i=0; i<n; i++){
            st.insert(a[i]);
        }
        for(int i=0; i<m; i++){
            st.insert(b[i]);
        }
        return st.size();
    }
};