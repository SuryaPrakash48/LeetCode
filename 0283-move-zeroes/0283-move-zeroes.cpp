class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz=nums.size();
        int count=0;
        for (int i=0; i<sz-count;) {
            if (nums[i]==0) {
                count++;
                nums.erase(find(nums.begin(), nums.end(), nums[i]));
                nums.push_back(0);
            } else {
                i++;
            }
        }
        return;
    }
};