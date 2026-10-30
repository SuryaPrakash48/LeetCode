class Solution {
public:

    vector<int> decimalToBinary(int n) {
        vector<int> bin;
        for (int i=n; i>0; i/=2) {
            bin.push_back(i%2);
        }
        return bin;
    }
    
    int calculateScore(int a, int b) {
        int s1=0;
        int s2=0;
        vector<int> a1=decimalToBinary(a);
        for (int j=0; j<a1.size(); j++) {
            if (a1[j]==1) {
                s1++;
            }
        }
        vector<int> b1=decimalToBinary(b);
        for (int k=0; k<b1.size(); k++) {
            if (b1[k]==1) {
                s2++;
            }
        }
        if (s1>=s2) {
            return s1*s2;
        }
        return s2/s1;
        
    }
};