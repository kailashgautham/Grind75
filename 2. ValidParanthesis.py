class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        #if len(s) % 2 != 0: return False
        opened = []
        for i in s:
            if i == '(' or i == '[' or i == '{':
                opened.append(i)
            elif len(opened) != 0:
                if (i == ')' and opened[-1] == '(') or (i == ']' and opened[-1] == '[') or (i == '}' and opened[-1] == '{'):
                    opened.pop()
                    continue
                else:
                    return False
            else:
                return False
        if len(opened) != 0: return False
        return True