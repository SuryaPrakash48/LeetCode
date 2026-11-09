class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int sz=nums.size();
        for (int i=1; i<sz;) {
           if ((nums[i]^nums[i-1])==0 || (nums[i]^nums[i+1])==0) {
            i++;
           } else {
            return nums[i];
           }
        }
        return nums[0];
    }
};