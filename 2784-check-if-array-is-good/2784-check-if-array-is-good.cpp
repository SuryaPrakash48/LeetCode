class Solution {
public:
    bool isGood(vector<int>& nums) {
        int sz=nums.size();
        int maxm=INT_MIN;
        for (int i=0; i<sz; i++) {
            maxm=max(maxm, nums[i]);
        }
        if (sz<maxm+1 || sz>maxm+1) {
            return false;
        }
        map<int, int> mpp;
        for (int j=0; j<sz; j++) {
            mpp[nums[j]]++;
        }
        for (int k=1; k<=maxm; k++) {
            mpp[k]--;
        }
        bool isGoodArr=true;
        for (auto it:mpp) {
            if (it.first<maxm && it.second>0) {
                isGoodArr=false;
                break;
            } else if (it.first==maxm && it.second>1) {
                isGoodArr=false;
                break;
            } else if (it.first<maxm && it.second<0) {
                isGoodArr=false;
                break;
            } else if (it.first==maxm && it.second>1) {
                isGoodArr=false;
                break;
            }
        }
        return isGoodArr;
    }
};