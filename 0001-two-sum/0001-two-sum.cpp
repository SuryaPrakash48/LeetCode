class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sz=nums.size();
        vector <int> output;
        
        for (int i=0; i<sz; i++) {
            int a=target-nums[i];
            for (int j=i+1; j<sz; j++) {
                if (a==nums[j]) {
                    output.push_back(i);
                    output.push_back(j);
                    break;
                }            
            }
        }
        return output;
    }
};