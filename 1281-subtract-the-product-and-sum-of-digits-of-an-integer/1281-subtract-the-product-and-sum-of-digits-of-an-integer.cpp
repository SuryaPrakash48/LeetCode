class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        for (int i=n; i>0; i/=10) {
            int a=i%10;
            product*=a;
            sum+=a;
        }
        return product-sum;
    }
};