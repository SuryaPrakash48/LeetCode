class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool ans=true;
        int mEven=INT_MAX;
        int mOdd=INT_MAX;
        int evenCount=0;
        int oddCount=0;
        for (int i=0;i<nums1.size(); i++) {
            if (nums1[i]%2==0) {
                mEven=min(mEven, nums1[i]);
                evenCount++;
            } else {
                mOdd=min(mOdd, nums1[i]);
                oddCount++;
            }
        }
        if (evenCount==nums1.size() || oddCount==nums1.size()) {
            ans=true;
        } else if (mOdd>mEven) {
            ans=false;
        }
        return ans;
    }
};