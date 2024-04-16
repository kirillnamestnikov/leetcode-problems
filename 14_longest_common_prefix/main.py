class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        word = min(strs, key=lambda x: len(x))
        res = ""
        for el in word:
            if all(x.startswith(res + el) for x in strs):
                res += el
        return res
