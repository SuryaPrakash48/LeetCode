class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum1=0, sum=INT_MIN;
        for (int i=0; i<nums.size(); i++) {
            sum1+=nums[i];
            sum=max(sum1, sum);
            if (sum1<0) {
                sum1=0;
            }
        }
        return sum;
    }
};