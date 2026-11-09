class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int sz=arr.size();
        if (sz==3) {
            return 1;
        }
        int peakIndex;
        for (int st=1, end=sz-2; end>st;) {
            int mid=(st+end)/2;
            if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) {
                return mid;
            } else if (arr[mid]>arr[mid-1]) {
                st=mid+1;
            } else if (arr[mid]<arr[mid-1]) {
                end=mid-1;
            }
            peakIndex=end;
        }
        return peakIndex;
    }
};