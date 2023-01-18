class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        new_s = ""
        for i in s:
            if (ord(i) >= 65 and ord(i) <= 90):
                new_s += chr(ord(i) + 32)
            elif (ord(i) >= 97 and ord(i) <= 122) or (ord(i) >= 48 and ord(i) <= 57):
                new_s += i
        if new_s == new_s[::-1]:
            return True
        return False