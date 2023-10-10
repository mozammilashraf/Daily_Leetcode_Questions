class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n= nums.size();
        // to sort and remove duplicates 
        set<int>st(nums.begin(),nums.end());  
        vector<int>temp(st.begin(),st.end());

        int result = INT_MAX;

        for(int i=0;i<temp.size();i++){
           // range
            int L = temp[i];    // R + L = n-1;
            int R = L + n-1;
            
            int j = upper_bound(temp.begin(), temp.end(), R) - temp.begin();

            int within_range = j -i;
            int out_of_range = n - within_range;  // No of operations
            result = min(result, out_of_range);

        }
        return result;
    }
};