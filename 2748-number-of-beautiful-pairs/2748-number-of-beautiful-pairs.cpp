class Solution {
public:
    int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
    }
    int lastDigit(int n)
    {
        return (n % 10);
    }
    int firstDigit(int n)
    {
    // Remove last digit from number
    // till only one digit is left
        while (n >= 10)
           n /= 10;
     
    // return the first digit
        return n;
    }
    
    int countBeautifulPairs(vector<int>& nums) {
        
        int cnt = 0 ;
        int n = nums.size();
        for(int i=0 ; i<n-1 ; i++){
            for(int j=i+1; j<n; j++){
                int a = firstDigit(nums[i]);
                int b = lastDigit(nums[j]);
                
                if(gcd(a,b) == 1){
                    cnt++;
                }
            }
            
            
        }
        return cnt;
        
    }
};