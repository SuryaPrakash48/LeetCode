class Solution {
public:
    int reverse(int x) {
        int ans=0;
        bool negative=false;
        if (x<0) {
            if (x==INT_MIN) {
                return 0;
            }
            x=-x;
            negative=true;
        }
        for (int i=x; i>0; i/=10) {
            if (ans>INT_MAX/10 || ans<INT_MIN/10) {
                return 0;
            }
            ans=(ans*10)+(i%10);
        }
        if (negative) {
            ans=-ans;
        }
        
        return ans;
    }
};