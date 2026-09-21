class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int sz=nums.size();
        int closest=INT_MIN;
        int closestIndex=0;
        
        for (int st=0, end=sz-1; st<=end;) {
            int mid=(st+end)/2;
            
            if (nums[mid]==target) {
                return mid;
            } else if (nums[mid]>target) {
                end=mid-1;
            } else {
                st=mid+1;
            }
            
            if (nums[mid]>closest && nums[mid]<target) {
                closest=nums[mid];
                closestIndex=mid+1;
            }
            
        }
        return closestIndex;
    }
};