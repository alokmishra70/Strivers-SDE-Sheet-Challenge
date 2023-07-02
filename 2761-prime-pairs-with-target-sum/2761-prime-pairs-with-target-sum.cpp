class Solution {
public:
    
    vector<vector<int>> findPrimePairs(int n) {
        
        vector<vector<int>>ans;
        
        vector<bool>isPrime(n+1 , 1);
        isPrime[0] = isPrime[1] = false;
        for(int i=2 ; i<=n ; i++){
            
            if(isPrime[i] == true){
                for(int j = 2*i ; j<=n ; j += i){
                    isPrime[j] = false;    
                }
            }
        }
        
        for(int i=2 ; i<=(n-1) ; i++){
            int j = n- i ;
            if(isPrime[i] and isPrime[j] and i<=j){
                vector<int>temp = {i , j};
                ans.push_back(temp);
            }
        }
        
        
        
        return ans;
    }
};