//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string st)
	{
	    int n = st.size();
	    int s = 0 , e = n-1;
	    while(s<e) {
	        if(st[s] != st[e]){
	            return 0;
	        }
	        else{
	            s++;
	            e--;
	        }
	    }
	    return 1;
	    // Your code goes here
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends