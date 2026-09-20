class Solution {
public:
    int fib(int n) {
        int ans=0;
        int a=0;
        int b=1;
        if (n<2 && n>=0) {
            return n;
        } else {
            for (int i=0; i<n-1; i++) {
                ans=a+b;
                a=b;
                b=ans;
            }
            return ans;
        }
        
    }
};