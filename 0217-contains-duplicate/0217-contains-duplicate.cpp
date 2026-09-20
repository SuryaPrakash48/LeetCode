class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool isDuplicate=false;
        int sz=nums.size();
        sort (nums.begin(), nums.end());
        if (sz==1) {
            return isDuplicate;
        } else {
            for (int i=0; i<sz; i++) {
                if (i>=1 && i<sz-1) {
                    if ((nums[i]^nums[i-1])==0 || (nums[i]^nums[i+1])==0) {
                        isDuplicate=true;
                    }
                } else if (i==0) {
                    if ((nums[i]^nums[i+1])==0) {
                        isDuplicate=true;
                    }
                } else if (i==sz-1) {
                    if ((nums[i]^nums[i-1])==0) {
                        isDuplicate=true;
                    }
                }
            }
        }
        
        
        return isDuplicate;
    }
};