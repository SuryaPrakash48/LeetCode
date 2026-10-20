class Solution {
public:
    int search(vector<int>& nums, int target) {
        int sz=nums.size();
        if (sz==1) {
            if (nums[0]==target) {
                return 0;
            } else {
                return -1;
            }
        }
        int pivot=0;
        for (int st=0, end=sz-1; end>st;) {
            int mid=(st+end)/2;
            
            if (nums[mid]>=nums[0]) {
                st=mid+1;
            } else if (nums[mid]<nums[0]) {
                end=mid;
            }
            pivot=st;
        }
        if (target<=nums[sz-1] && target>=nums[pivot]) {
            for (int st=pivot, end=sz-1; end>=st;) {
                int mid=(st+end)/2;
                if (target>nums[mid]) {
                    st=mid+1;
                } else if (target<nums[mid]) {
                    end=mid-1;
                } else {
                    return mid;
                }
            }
        } else if (target>=nums[0] && target<=nums[pivot-1]) {
            for (int end=pivot-1, st=0; end>=st;) {
                int mid=(st+end)/2;
                if (target>nums[mid]) {
                    st=mid+1;
                } else if (target<nums[mid]) {
                    end=mid-1;
                } else {
                    return mid;
                }
            }
        }
        return -1;
    }
};