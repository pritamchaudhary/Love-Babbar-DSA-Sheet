// Cyclically rotate an array by one

// Given an array, rotate the array by one position in clock-wise direction.

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

//User function Template for C++

void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=n-1; i>=1; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}