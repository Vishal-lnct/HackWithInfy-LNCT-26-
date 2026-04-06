class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:

        mp={0:1}

        count=0;
        sum=0;

        for i in range(len(nums)):
            sum+=nums[i]
            p=sum-k
            if p in mp:
                count+=mp[p]

            mp[sum]=mp.get(sum,0)+1


        return count        

        