class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for (int i : nums)
        {
            ans.push_back(i);
        }

        for (int j : nums)
        {
            ans.push_back(j);
        }

        return ans;
    }
};