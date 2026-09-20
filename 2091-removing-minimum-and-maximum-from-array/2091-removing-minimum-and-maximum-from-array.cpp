class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minm=INT_MAX;
        int maxm=INT_MIN;
        int M,m;
        
        for (int i=0; i<nums.size(); i++) {
            if (nums[i]>maxm) {
                maxm=nums[i];
                M=i+1;
            }
            if (nums[i]<minm) {
                minm=nums[i];
                m=i+1;
            }
        }
        int deletion1=INT_MAX, deletion2=INT_MAX, deletion3=INT_MAX;
        if (m>M) {
            deletion1=M+nums.size()-m+1;
        } else if (M>m) {
            deletion1=m+nums.size()-M+1;
        }
        if (m>=M) {
            deletion2=m;
        } else if (M>=m) {
            deletion2=M;
        }
        if (M>m) {
            deletion3=nums.size()-m+1;
        } else if (m>M) {
            deletion3=nums.size()-M+1;
        }
        
        return min({deletion1, deletion2, deletion3});

        
        

    }
};