class Solution {
public:
    int hammingWeight(int n) {
        int binD=0;
        for (int i=n; i>0; i/=2) {
            if (i%2!=0) {
                binD++;
            }
        }
        return binD;
    }
};