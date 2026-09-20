class Solution {
public:
    int reverseDegree(string s) {
        int sz=s.size();
        int sum=0;
        for (int i=0; i<sz; i++) {
            sum+=(('z'-s[i]+1)*(i+1));
        }
        return sum;
    }
};