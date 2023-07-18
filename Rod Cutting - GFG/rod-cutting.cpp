//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  private:
    int f(int price[] , int n ,int ind , vector<vector<int>>&dp){
        if(ind == 0){
            return n*price[0];
        }
        if(dp[ind][n] != -1) return dp[ind][n];
        int notTake = f(price,n,ind-1 , dp);
        int take = INT_MIN;
        int rodLength = ind+1;
        if(rodLength <= n){
            take = price[ind] + f(price,n-rodLength,ind,dp);
        }
        return dp[ind][n] = max(take , notTake);
    }
  public:
    int cutRod(int price[], int n) {
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return f(price,n,n-1 , dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends