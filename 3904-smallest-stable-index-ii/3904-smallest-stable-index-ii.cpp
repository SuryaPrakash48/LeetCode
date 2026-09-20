class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        const int sz=nums.size();
        vector<int> maxm(sz);
        vector<int> minm(sz);
        
        
        int maxm1=INT_MIN;
        for (int i=0; i<sz; i++) {
            maxm1=max(maxm1, nums[i]);
            maxm[i]=maxm1;
        }
        int minm1=INT_MAX;
        for (int j=sz-1; j>=0; j--) {
            minm1=min(minm1, nums[j]);
            minm[j]=minm1;
        }
        for (int l=0; l<sz; l++) {
            int instabilityScore=maxm[l]-minm[l];
            if (instabilityScore<=k) {
                return l;
            }
        }
        return -1;

    }
};