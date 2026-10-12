class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int sz=nums.size();
        vector<int> ans;
        int maxmP=INT_MIN;
        int small=INT_MAX;
        int big=INT_MIN;
        for (int i=0; i<sz; i++) {
            for (int j=i+1; j<sz; j++) {
                if (nums[j]==target-nums[i] && nums[i]!=nums[j]) {
                    maxmP=max(maxmP, nums[i]*nums[j]);
                    if (nums[i]*nums[j]==maxmP) {
                        small=min(nums[i], nums[j]);
                        big=max(nums[i], nums[j]);
                    }  
                }
            }
        }
        if (small==INT_MAX || big==INT_MIN) {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        for (int k=0; k<sz; k++) {
            if (nums[k]==big) {
                ans.push_back(k);
                break;
            }
        }
        for (int k=0; k<sz; k++) {
            if (nums[k]==small) {
                ans.push_back(k);
                break;
            }
        }
        return ans;
        
        
    }
};