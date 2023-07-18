//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution{
public:	
	
	 
	int print2largest(int arr[], int n) {
	    int FirstLargest = 0 , SecondLargest = 0;
	    
	    for(int i=0 ; i<n; i++){
	        if(arr[i] > FirstLargest){
	            FirstLargest = arr[i];
	        }
	    }
	    
	    for(int i=0 ; i<n ; i++){
	        if(arr[i] != FirstLargest){
	            if(arr[i] > SecondLargest){
	                SecondLargest = arr[i];
	            }
	        }
	    }
	    if(SecondLargest == 0) return -1;
	    else return SecondLargest;
	    
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends