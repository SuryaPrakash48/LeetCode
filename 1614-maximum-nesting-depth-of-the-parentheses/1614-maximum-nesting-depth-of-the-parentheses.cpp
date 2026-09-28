class Solution {
public:
    int maxDepth(string s) {
        int sz=s.size();
        int count=0;
        int ans=0;
        for (int i=0; i<sz; i++) {
            int ascii=s[i];

            if (ascii==40) {
                count++;
                ans=max(ans, count);

            } else if (ascii==41) {
                count--;
            }
        }
        return ans;
    }
};