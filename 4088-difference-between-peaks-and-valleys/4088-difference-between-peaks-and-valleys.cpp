class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int sz=nums.size();
        int peakIndex =0;
        int valleyIndex =0;
        for (int i=1; i<sz-1; i++) {
            if (nums[i]>nums[i+1] && nums[i]>nums[i-1]) {
                peakIndex+=nums[i];
            } else if (nums[i]<nums[i+1] && nums[i]<nums[i-1]) {
                valleyIndex+=nums[i];
            }
        }
        return peakIndex-valleyIndex;
    }
};