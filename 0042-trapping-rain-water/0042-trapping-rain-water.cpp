class Solution {
public:
    int trap(vector<int>& height) {
        int sz=height.size();
        int waterTrapped=0;
        int maxmArr=INT_MIN;
        int index;
        int maxmL=INT_MIN;
        for (int j=0; j<sz; j++) {
            if (height[j]>maxmArr) {
                index=j;
                maxmArr=height[j];
            }
        }
        for (int i=0; i<index; i++) {
            maxmL=max(maxmL, height[i]);
            waterTrapped+=(maxmL-height[i]);
        }
        int maxmR=INT_MIN;
        for (int k=sz-1; k>index; k--) {
            maxmR=max(maxmR, height[k]);
            waterTrapped+=(maxmR-height[k]);
        }
        return waterTrapped;
    }
};