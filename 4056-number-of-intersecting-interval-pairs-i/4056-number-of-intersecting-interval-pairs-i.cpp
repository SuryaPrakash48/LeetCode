class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int sz=intervals.size();
        int count=0;
        for (int i=0; i<sz; i++) {
            int st=intervals[i][0];
            int end=intervals[i][1];
            for (int j=i+1; j<sz; j++) {
                if (intervals[j][0]>=st && intervals[j][0]<=end) {
                    count++;
                } else if (intervals[j][1]>=st && intervals[j][1]<=end) {
                    count++;
                } else if (intervals[j][0]<=st && intervals[j][1]>=end) {
                    count++;
                }
            }
        }
        return count;
    }
};