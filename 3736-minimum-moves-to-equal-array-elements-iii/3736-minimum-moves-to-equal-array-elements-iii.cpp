class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sz=nums.size();
        int moves=0;
        sort(nums.begin(), nums.end());
        for (int i=0; i<sz-1; i++) {
            moves+=(nums[sz-1]-nums[i]);
        }
        return moves;
    }
};