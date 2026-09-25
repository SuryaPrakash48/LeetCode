class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<=0) {
            return false;
        }
        bool isIt=true;
        for (int i=n; i>1; i/=2) {
            if (i%2!=0) {
                isIt=false;
                break;
            }
        }
        return isIt;
    }
};