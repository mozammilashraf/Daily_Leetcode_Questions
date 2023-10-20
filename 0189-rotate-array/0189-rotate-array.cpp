class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k = k%n;

        // Reverse the first n - k numbers.
        // Index i (0 <= i < n - k) becomes n - k - i.
        reverse(nums.begin(), nums.begin() + n - k);
        
        // Reverse tha last k numbers.
        // Index n - k + i (0 <= i < k) becomes n - i.
        reverse(nums.begin() + n - k, nums.end());
        
        // Reverse all the numbers.
        // Index i (0 <= i < n - k) becomes n - (n - k - i) = i + k.
        // Index n - k + i (0 <= i < k) becomes n - (n - i) = i.
        reverse(nums.begin(), nums.end());
    }
};

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n= nums.size();
//         if ((n == 0) || (k <= 0)) return;
//         // Make a copy of nums
//         vector<int> numsCopy(n);
//         for (int i = 0; i < n; i++){
//             numsCopy[i] = nums[i];
//         }
        
//         // Rotate the elements.
//         for (int i = 0; i < n; i++){
//             nums[(i + k)%n] = numsCopy[i];
//         }    
//     }
// };
