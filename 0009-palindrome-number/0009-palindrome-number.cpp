class Solution {
public:
    bool isPalindrome(int x) {
        bool palindrome=true;
        if (x<0) {
            return false;
        }
        vector<int> rem;
        for (int i=x; i>0; i/=10) {
            int a=i%10;
            rem.push_back(a);
        }
        int sz=rem.size();
        for (int j=0; j<sz/2; j++) {
            if (rem[j]!=rem[sz-1-j]) {
                palindrome=false;
                break;
            }
        }
        return palindrome;
    }
};