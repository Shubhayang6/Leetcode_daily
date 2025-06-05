class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> PairMap;
        vector<vector<string>> result;

        for(string s:strs)
        {
            string Sword = s;
            sort(Sword.begin(),Sword.end());
            PairMap[Sword].push_back(s);
        }

        for(auto& i:PairMap)
        {
            result.push_back(i.second);
        }

        return result;
    }
};