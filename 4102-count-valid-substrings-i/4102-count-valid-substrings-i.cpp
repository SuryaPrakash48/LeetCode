class Solution {
public:
    long long countValidSubstrings(string s) {
        int sz=s.size();
        long long int count=0;
        int lastInvalid=-1;
        for (int i=0; i<sz; i++) {
            if (i>=2 && s[i-2]=='a' && s[i-1]=='b' && s[i]=='c') {
                lastInvalid=i-2;
            }
            count+=(i-lastInvalid);
        }
        return count;
    }
};