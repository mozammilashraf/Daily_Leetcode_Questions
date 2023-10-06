class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        map<int,int>mp;
        int n1= nums1.size();
        int n2= nums2.size();
        if(n2>n1){
            swap(nums1,nums2);
            swap(n1,n2);
        }
        for(auto it:nums2){
            mp[it]++;
        }
        for(auto it:nums1){
            if(mp.find(it) != mp.end() && mp[it]>0){
                ans.push_back(it);
                mp[it]--;
            }
        }
        return ans;
        
    }
};