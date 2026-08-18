class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        visited = set()
        res = 0
        left = 0
        for right in range(len(s)):
            while s[right] in visited:
                visited.remove(s[left])
                left = left+1
            visited.add(s[right])
            res=max(res,right-left+1)
        return res