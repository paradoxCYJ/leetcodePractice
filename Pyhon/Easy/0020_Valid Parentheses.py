class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        
        pairChar = {
            '(':')' ,
            '{':'}',
            '[':']'
        }
        stack = []
        
        if len(s) & 1:
            return False
        
        for i in s:
            if i in pairChar:
                stack.append(pairChar[i])
            elif len(stack) == 0 or stack.pop() != i:
                return False
        
        return len(stack) == 0