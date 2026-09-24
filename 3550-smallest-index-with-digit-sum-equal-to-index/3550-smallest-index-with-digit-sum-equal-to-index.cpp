class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sz=nums.size();
        
        for (int i=0; i<sz; i++) {
            int sum=0;
            for (int j=nums[i]; j>0; j/=10) {
                sum+=(j%10);
            }
            if (sum==i) {
                return i;
            }
        }
        return -1;
    }
};