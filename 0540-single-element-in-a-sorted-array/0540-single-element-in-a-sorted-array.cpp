class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int sz=nums.size();
        if (sz==1) {
            return nums[0];
        }
        for (int st=0, end=sz-1; end>=st;) {
            int mid=st+(end-st)/2;
            if (mid==0) {
                return nums[mid];
            } else if (mid==sz-1) {
                return nums[mid];
            }
            if (mid%2!=0) {
                if (nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) {
                    return nums[mid];
                } else if (nums[mid]==nums[mid-1]) {
                    st=mid+1;
                } else {
                    end=mid-1;
                }
            } else {
                if (nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) {
                    return nums[mid];
                } else if (nums[mid]==nums[mid-1]) {
                    end=mid-2;
                } else {
                    st=mid+2;
                }
            }
        }
        return -1;
    }
};