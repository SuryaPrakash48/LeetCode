class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int minm=INT_MAX;
        int sz=nums.size();
        int mergedInt=0;
        string a="";
        for (int i=0; i<sz; i++) {
            if (i%2==0) {
                a=to_string(nums[i]);
            } else {
                string b=to_string(nums[i]);
                mergedInt=stoi(a+b);
                minm=min(minm, mergedInt);
                mergedInt=0;
            }
        }
        return minm;
    }
};