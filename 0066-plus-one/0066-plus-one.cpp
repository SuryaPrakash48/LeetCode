class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sz=digits.size();
        vector<int> ans;
        for (int i=sz-1; i>=0; i--) {
            if (digits[i]<9) {
                digits[i]++;
                break;
            } else if (digits[i]==9 && i==0) {
                for (int k=0; k<sz+1; k++) {
                    if (k==0) {
                        ans.push_back(1);
                    } else {
                        ans.push_back(0);
                    }
                }
                return ans;
            } else if (digits[i]==9){
                digits[i]=0;

            }
        }
        return digits;
    }
};