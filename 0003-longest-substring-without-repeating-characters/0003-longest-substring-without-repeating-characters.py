class Solution(object):
    def lengthOfLongestSubstring(self, s):
    
        x= set() 
        left = 0
        maxi = 0
        
        for right in range(len(s)):
            
            while s[right] in x:
                x.remove(s[left])
                left += 1
            
            x.add(s[right])
            maxi = max(maxi, right - left + 1)
        
        return maxi  

        