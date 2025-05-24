class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> array;
        for(int i:nums)
        {
            if(array.count(i)) return true;
            array.insert(i);
        }
        return false;
    }
};