//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        long long minAns = INT_MAX;
        long long maxAns = INT_MIN;
        for(int i=0; i<n; i++){
            if(a[i] < minAns){
                minAns = a[i];
            }
            if(a[i] > maxAns){
                maxAns = a[i];
            }
        }
        return make_pair(minAns, maxAns);
    }
};