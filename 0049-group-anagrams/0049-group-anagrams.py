class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagrams = defaultdict(list)
        for char in strs:
            key = "".join(sorted(char))

            anagrams[key].append(char)
        return list(anagrams.values())