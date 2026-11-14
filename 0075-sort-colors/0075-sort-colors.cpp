class Solution {
public:
    void sortColors(vector<int>& nums) {
        int sz=nums.size();
        for (int i=0; i<sz; i++) {
            for (int j=0; j<sz-1; j++) {
                if (nums[j]>nums[j+1]) {
                    swap(nums[j], nums[j+1]);
                } else {
                    continue;
                }
            }
        }
        
        return;
    }
};