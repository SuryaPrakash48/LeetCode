class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sz1=s.size();
        int sz2=t.size();
        bool isIt=true;
        int i=0;
        for  (int j=0; i<sz1 && j<sz2;) {
            if (s[i]==t[j]) {
                i++;
                j++;
            } else {
                j++;
            }
        }
        if (i!=sz1) {
            isIt=false;
        }
        return isIt;
    }
};