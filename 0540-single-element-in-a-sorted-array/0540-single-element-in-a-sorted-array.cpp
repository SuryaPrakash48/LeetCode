class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int sz=nums.size();
        for (int i=1; i<sz; i++) {
           if (nums[i]==nums[i-1]) {
            continue;
           } else if (nums[i]==nums[i+1]) {
            continue;
           } else {
            return nums[i];
           }
        }
        return nums[0];
    }
};