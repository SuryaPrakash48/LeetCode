class Solution {
public:
    int findMin(vector<int>& nums) {
        int minm=INT_MAX;
        int sz=nums.size();
        for (int i=0; i<sz; i++) {
            minm=min(minm, nums[i]);
        }
        return minm;
    }
};