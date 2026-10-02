class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool isMountain=true;
        int sz=arr.size();
        if (sz<=2) {
            return false;
        }
        int maxm=INT_MIN;
        int index;
        for (int i=0; i<sz; i++) {
            if (arr[i]>maxm) {
                maxm=arr[i];
                index=i;
            }
        }
        if (index==sz-1 || index==0) {
            return false;
        }
        for (int j=1; j<=index; j++) {
            if (arr[j]<=arr[j-1]) {
                isMountain=false;
            }
        }
        for (int k=sz-2; k>=index; k--) {
            if (arr[k]<=arr[k+1]) {
                isMountain=false;
            }
        }
        return isMountain;
    }
};