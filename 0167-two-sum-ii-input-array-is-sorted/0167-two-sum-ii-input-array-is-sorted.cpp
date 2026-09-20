class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int sum=0;
        for (int i=0, j=numbers.size()-1; i<j;) {
            sum=numbers[i]+numbers[j];
            if (sum==target) {
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            } else  if (sum>target) {
                j--;
            } else if (sum<target) {
                i++;
            }
        }
        return ans;
    }
};