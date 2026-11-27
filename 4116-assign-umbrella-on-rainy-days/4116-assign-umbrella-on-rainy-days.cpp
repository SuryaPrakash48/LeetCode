class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int sz=rain.size();
        int alice=0;
        int bob=0;
        vector<string> ans;
        for (int i=0; i<sz-1; i++) {
            if (rain[i]==1 && rain[i+1]==1 && alice<=bob) {
                ans.push_back("Alice");
                alice++;
            } else if (rain[i]==1) {
                ans.push_back("Bob");
                bob++;
            } else {
                ans.push_back("None");
            }
        }
        if (rain[sz-1]==1) {
            ans.push_back("Bob");
        } else {
            ans.push_back("None");
        }
        return ans;
    }
};