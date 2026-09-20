class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int st=0, end=s.size()-1; end>st; st++, end--) {
            swap(s[st],  s[end]);
        }
    }
};