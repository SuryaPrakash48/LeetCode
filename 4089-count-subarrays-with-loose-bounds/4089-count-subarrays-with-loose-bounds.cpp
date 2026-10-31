class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long subarrays=0;
        int sz=nums.size();
        long long int count=0;
        for (int i=0; i<sz; i++) {
            if (nums[i]>=minK && nums[i]<=maxK) {
                count++;
            } else {
                subarrays+=(count)*(count+1)/2;
                count=0;
            }
        }
        subarrays+=(count)*(count+1)/2;
        return subarrays;
    }
};