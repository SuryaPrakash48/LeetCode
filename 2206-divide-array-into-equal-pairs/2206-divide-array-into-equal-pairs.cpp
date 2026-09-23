class Solution {
public:
    bool divideArray(vector<int>& nums) {
        bool equalPairs=true;
        int sz=nums.size();
        
        for (int i=0; i<sz; i++) {
            int count=0;
            for (int j=0; j<sz; j++) {
                if (nums[i]==nums[j]) {
                    count ++;
                }
            }
            if (count%2!=0) {
                equalPairs=false;
                break;
            }

            
        }
        return equalPairs;

    }
};