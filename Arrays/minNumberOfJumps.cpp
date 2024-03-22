// Minimum number of jumps

// Given an array of N integers arr[] where each element represents the maximum length of the jump that can be made forward from that element. This means if arr[i] = x, then we can jump any distance y such that y ≤ x.
// Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.

// Note: Return -1 if you can't reach the end of the array.

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // The number of jumps needed to
        // reach the starting index is 0
        if (n <= 1)
            return 0;
           
          //If value of first index guarantees 
          //only 1 jump is needed, return 1
          if (arr[0] >= n-1)
              return 1;
     
        // Return -1 if not possible to jump
        if (arr[0] == 0)
            return -1;

        int maxReach = arr[0];
     
        int step = arr[0];
        int jump = 1;
     
        int i = 1;
        for (i = 1; i < n; i++) {
            // Check if we have reached the end of the array
            if (i == n - 1)
                return jump;
           
             //Check if value at current index guarantees jump to end
              if (arr[i] >= (n-1) - i)
                  return jump + 1;
     
            // updating maxReach
            maxReach = max(maxReach, i + arr[i]);
     
            // we use a step to get to the current index
            step--;
     
            // If no further steps left
            if (step == 0) {
                // we must have used a jump
                jump++;
     
                if (i >= maxReach)
                    return -1;
    
                step = maxReach - i;
            }
        }
     
        return -1;
    }
};