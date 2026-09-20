class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz=nums.size();
        int product=1;
        int product1=1;
        int zero=0;
        for (int i=-0; i<sz; i++) {
            product*=nums[i];
            if (nums[i]!=0) {
                product1*=nums[i];
            } else {
                zero++;
            }
        }
        vector<int> answer;
        if (zero>1) {
            for (int k=0; k<sz; k++) {
                answer.push_back(0);
            }
        } else {
            for (int j=0; j<sz; j++) {
                if (nums[j]==0) {
                    answer.push_back(product1);
                } else {
                    answer.push_back(product/nums[j]);
                } 
            }
        }
        return answer;
        
        
        
    }
};