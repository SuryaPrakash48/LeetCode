class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        double median;
        vector<int> result(m+n);
       merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), result.begin());
       sort(result.begin(), result.end());
        if ((m+n)%2!=0) {
            median=result[((m+n+1)/2)-1];
        } else {
            double a=result[(m+n)/2];
            double b=result[(m+n-2)/2];
            median=(a+b)/2;
        }
        return median;
    }
};