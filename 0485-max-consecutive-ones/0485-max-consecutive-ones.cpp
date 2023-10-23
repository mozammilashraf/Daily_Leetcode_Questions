class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len=0 , ans =0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]== 1){
                len++;
            }
            else{
               len = 0;
            }
            ans = max(ans, len);
        }
      return ans;  
    }
};