class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> umap;

        for (int i:s)
        {
            umap[i]++;
        }

        for(int i:t)
        {
            umap[i]--;
        }

        for(auto i:umap)
        {
            if(i.second != 0)
            {
                return false;
            }
        }
        return true;
    }
};