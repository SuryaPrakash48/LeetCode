class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int sz1=arr1.size();
        int sz2=arr2.size();
        int count=0;
        for (int i=0; i<sz1; i++) {
            bool isDistance=true;
            for (int j=0; j<sz2; j++) {
                if (arr1[i]-arr2[j]<=d && arr1[i]-arr2[j]>=-d) {
                    isDistance=false;
                    break;
                }
            }
            if (isDistance) {
                count++;
            }
        }
        return count;
    }
};