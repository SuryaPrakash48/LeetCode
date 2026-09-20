class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int sz=nums.size();
        int instabilityScore;
        bool stable=false;
        int ans;
        for (int i=0; i<sz; i++) {
            int maxm=INT_MIN;
            int minm=INT_MAX;
            for (int j=i; j<sz; j++) {
                minm=min(minm, nums[j]);
            }
            for (int k=0; k<=i; k++) {
                maxm=max(maxm, nums[k]);
            }
            instabilityScore=maxm-minm;
            if (instabilityScore<=k) {
                stable=true;
                ans=i;
                break;
            }
        }
        
        if (stable) {
            return ans;
        }
        return -1;
    }
};