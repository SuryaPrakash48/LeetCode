class Solution {
public:
    int countPrimes(int n) {
        if (n<=2) {
            return 0;
        }
        vector<bool> isPrime(n, true);
        int count=-2;
        for (int i=3; i*i<n; i+=2) {
            if (isPrime[i]) {
                for (int k=i*i; k<n; k+=i) {
                    isPrime[k]=false;
                }
            }
        }
        for (int l=4; l<n; l+=2) {
            if (l%2==0) {
                isPrime[l]=false;
            }
        }
        for (int k=0; k<n; k++) {
            if (isPrime[k]) {
                count++;
            }
        }
        return count;
       

    }
    
};