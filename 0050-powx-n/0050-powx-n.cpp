class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        double product=x;
        long long int pow=n;
        bool negative=false;
        if (pow<0) {
            pow=-pow;
            negative=true;
        }
        for (long long int i=pow; i>0; i/=2) {
            if (i%2!=0) {
                ans*=product;
            }
            product*=product;
        }
        if (negative) {
            ans=1/ans;
        }
        return ans;

    }
};