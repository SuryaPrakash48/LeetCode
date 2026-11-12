class Solution {
public:
    bool check(vector<int>& nums) {
        int sz=nums.size();
        bool isRotated=true;
        int trough=0;
        for (int i=0; i<sz-1; i++) {
            if (nums[i]>nums[i+1]) {
                trough++;
            }
            if (trough==1 && nums[0]<nums[i+1]) {
                return false;
            }
        }
        if (trough>1) {
            isRotated=false;
        }
        return isRotated;
    }
};