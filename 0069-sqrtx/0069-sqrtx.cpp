class Solution {
public:
    int mySqrt(int x) {
        unsigned int ans;
        for (int i=1; i<=x/i;) {
            if (i<x/i) {
                i++;
            } else if (i>x/i) {
                ans=i-1;
                break;
            } else {
                ans=i;
                break;
            }
        }
        return ans;
    }
};