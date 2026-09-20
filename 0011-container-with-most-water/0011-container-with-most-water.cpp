class Solution {
public:
    int maxArea(vector<int>& height) {
        int sz=height.size();
        int mostWater=INT_MIN;
        for (int st=0, end=sz-1; end>st;) {
            int volume=min(height[st], height[end])*(end-st);
            mostWater=max(mostWater, volume);
            if (height[st]>height[end]) {
                end--;
            } else {
                st++;
            }
        }
        return mostWater;
    }
};