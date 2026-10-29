class Solution {
public:
    int findMin(vector<int>& nums) {
        int minm=nums[0];
        int pivot;
        int sz=nums.size();
        for (int st=0, end=sz-1; end>st;) {
            int mid=(st+end)/2;
            if (nums[mid]<nums[0])  {
                end=mid;
            } else if (nums[mid]>=nums[0]) {
                st=mid+1;
            }
            pivot=st;
        }
        return min(nums[pivot], minm);
    }
};