class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int sz=nums.size();
        for (int i=0; i<sz; i++) {
            if (nums[i]==target) {
                return i;
            } else if (nums[i]>target) {
                return i;
                break;
            }
            
        }
        return sz;

    }
};