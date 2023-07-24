class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        sarr = {}
        tarr = {}
        for i in s:
            if i not in sarr:
                sarr[i] = 1
            else:
                sarr[i] += 1
        for i in t:
            if i not in tarr:
                tarr[i] = 1
            else:
                tarr[i] += 1
        for i in sarr:
            if i not in tarr:
                return False
            if sarr[i] != tarr[i]: return False
        for i in tarr:
            if i not in sarr:
                return False
            if sarr[i] != tarr[i]: return False
        return True