class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz=nums.size();
        int sum=0;
        for (int i=0; i<sz; i++) {
            sum+=nums[i];
        }
        return (sz*(sz+1)/2)-sum;
    }
};