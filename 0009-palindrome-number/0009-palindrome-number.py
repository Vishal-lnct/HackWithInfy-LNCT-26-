class Solution(object):
    def isPalindrome(self, x):
       
        if x < 0:
            return False
        
        ans = 0
        original = x
        
        while x > 0:
            rem = x % 10
            x = x // 10
            ans = ans * 10 + rem
        
        if original == ans:
            return True
        
        return False


       
        