class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // morse voting algorithm
        int n = nums.size();
        int ele;
        int cnt = 0;
        for(int i=0 ; i<n ;i++){
            if(cnt == 0){
                ele = nums[i];
                cnt = 1;
            }
            else if(nums[i] == ele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0 ;i<n; i++){
            if(nums[i] == ele) cnt1++;
        }
        if(cnt1 > n/2) {
            return ele;
        }
        else return -1;
    }
};