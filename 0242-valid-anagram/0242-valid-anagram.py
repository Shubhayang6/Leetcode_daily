class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        char_count = {}

        if(len(s) != len(t)):
            return False

        for char in s:
            char_count[char] = char_count.get(char,0) + 1

        for char in t:
            if char not in char_count or char_count[char] == 0:
                return False
            char_count[char] -= 1
        return True 
        
             