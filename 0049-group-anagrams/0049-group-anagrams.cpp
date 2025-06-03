class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;
        vector<vector<string>> result;
        for (string word:strs)
        {
            string sortedWord = word;
            sort(sortedWord.begin(),sortedWord.end());
            anagramMap[sortedWord].push_back(word);
        }

        for(auto& iter:anagramMap)
        {
            result.push_back(iter.second);
        }

        return result;
    }
};