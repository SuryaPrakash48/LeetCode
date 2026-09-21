class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for (int i=1; i<nums.size(); i++) {
            if (nums[i-1]==nums[i]) {
                continue;
            } else {
                if (nums[i]==nums[i+1]) {
                    continue;
                } else {
                    return nums[i];
                }
            }
        }
        return nums[0];
    }
};