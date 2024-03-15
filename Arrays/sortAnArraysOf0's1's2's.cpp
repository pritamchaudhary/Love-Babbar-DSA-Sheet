// Sort an array of 0s, 1s and 2s

// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;
        for(int i=0; i<n; i++){
            if(a[i] == 0){
                zeroCount++;
            }
            if(a[i] == 1){
                oneCount++;
            }
            if(a[i] == 2){
                twoCount++;
            }
        }
        int index = 0;
        while(zeroCount--){
            a[index] = 0;
            index++;
        }
        while(oneCount--){
            a[index] = 1;
            index++;
        }
        while(twoCount--){
            a[index] = 2;
            index++;
        }
    }
    
};


// 2nd approach --- 2 pointer approach

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int index = 0;
        int left = 0;
        int right = n-1;
        
        while(index <= right){
            if(a[index] == 0){
                swap(a[index], a[left]);
                left++;
                index++;
            }
            else if(a[index] == 2){
                swap(a[index], a[right]);
                right--;
            }
            else{
                index++;
            }
        }
    }
    
};