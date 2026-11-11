class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num==1) {
            return false;
        }
        bool isPerfect=false;
        int sum=1;
        for (int i=2; i*i<=num; i++) {
            if (num%i==0) {
                sum+=(i+(num/i));
            }
        }
        if (sum==num) {
            isPerfect=true;
        }
        return isPerfect;
    }
};