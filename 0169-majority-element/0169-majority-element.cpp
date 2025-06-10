class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> majMap;

        for(int i : nums)
        {
            majMap[i]++;
        }

        for(auto i : majMap)
        {
            if((i.second) > n/2)
            return i.first;
        }

    return -1;
    }
};