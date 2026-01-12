// Last updated: 11/01/2026, 19:49:31
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> twoSum;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums.at(i) + nums.at(j) == target) {
                    twoSum.push_back(i);
                    twoSum.push_back(j);
                    return twoSum;
                }
            }
        }
        return twoSum;
    }
};