class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int uniqueValue=0;
        for (int i:nums) {
            uniqueValue^=i;
        }
        return uniqueValue;
    }
};