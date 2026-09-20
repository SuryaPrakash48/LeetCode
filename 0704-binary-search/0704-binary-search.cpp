class Solution {
public:
    int search(vector<int>& nums, int target) {
        int sz=nums.size();
        for (int st=0, end=sz-1; end>=st;) {
            int mid=(st+end)/2;
            if (nums[mid]==target) {
                return mid;
            } else if (nums[mid]>target) {
                end=mid-1;
            } else {
                st=mid+1;
            }
        }
        return -1;
    }
};