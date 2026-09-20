class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (int i=1; i<nums.size();) {
            if (nums[i]==nums[i-1]) {
                nums.erase(find(nums.begin(), nums.end(), nums[i]));
            } else {
                i++;
            }
        }
        int sz=nums.size();
        return sz;
    }
};