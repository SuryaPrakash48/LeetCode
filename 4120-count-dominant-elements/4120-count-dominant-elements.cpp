class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int sz=nums.size();
        if (sz==1) {
            return 1;
        }
        int count=0;
        if (nums[0]>=nums[1]) {
            count++;
        }
        if (nums[sz-1]>=nums[sz-2]) {
            count++;
        }
        for (int i=1; i<sz-1; i++) {
            if (nums[i]*2>=nums[i-1]+nums[i+1]) {
                count++;
            }
        }
        return count;
    }
};