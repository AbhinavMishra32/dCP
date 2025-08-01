class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        # foof bllb
        # b: 2, l: 5, l: 5, b: 2, 
        # b: 2, l:5, g: 7
        d = {}
        for i, j in zip(s, t):
            if i not in d:
                diff = ord(i) - ord(j)
                if (diff != 0):
                    d[i] = diff
                else: continue
            elif i in d:
                diff = ord(i) - ord(j)
                if (diff != d[i]):
                    return False

        return True
