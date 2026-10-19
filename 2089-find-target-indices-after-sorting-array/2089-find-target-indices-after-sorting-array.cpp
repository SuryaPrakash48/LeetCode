class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort (nums.begin(), nums.end());
        int sz=nums.size();
        vector<int>ans;
        for (int i=0; i<sz; i++) {
            if (nums[i]==target) {
                ans.push_back(i);
            }
        }
        sort (ans.begin(), ans.end());
        return ans;
    }
};