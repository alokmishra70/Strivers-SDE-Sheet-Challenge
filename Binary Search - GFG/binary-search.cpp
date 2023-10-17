//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
    
  public:
    int recursiveApproach(int arr[] , int low , int high , int k){
        int mid = (low+high)/2;
        
        if(low > high) return -1;
        if(arr[mid] == k) return mid;
        else if(k>arr[mid]){
           return recursiveApproach(arr,mid+1,high,k); 
        } 
        else {
            return recursiveApproach(arr,low,mid-1,k);
        }
        
    }
    int binarysearch(int arr[], int n, int k) {
        int low = 0 , high = n-1;
       
        return recursiveApproach(arr,low,high,k);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends