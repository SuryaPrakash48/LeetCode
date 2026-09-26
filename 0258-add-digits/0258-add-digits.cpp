class Solution {
public:
    int addDigits(int num) {
        int ans=num;
        
        for (int i=ans; i>9;) {
            int ans1=0;
            for (int j=i; j>0; j/=10) {
                ans1+=(j%10);
            }
            if (ans1<ans) {
                ans=ans1;
            }
            i=ans;
        }
        return ans;
    }
};