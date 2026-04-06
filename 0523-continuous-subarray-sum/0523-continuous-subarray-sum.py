class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        mp={0:-1}

        sum=0
        for i in range(len(nums)):
            sum+=nums[i];
            p=sum%k
            if p in mp:
                if i-mp[p]>1:
                    return True

            else:
                mp[p]=i


        return False        


