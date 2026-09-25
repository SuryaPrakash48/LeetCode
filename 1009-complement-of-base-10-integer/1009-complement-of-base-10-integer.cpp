class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0;
        int a=1;
        if (n==0) {
            return 1;
        }
        for (int i=n; i>0; i/=2) {
            int bin=(i%2)^1;
            ans+=(bin*a);
            a*=2;
            
        }
        return ans;
    }
};