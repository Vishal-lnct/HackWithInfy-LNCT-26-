class Solution {
    public int missingNumber(int[] nums) {

      int n=nums.length;
int ttl=0;
        for(int i=0;i<nums.length;i++){

            ttl+=nums[i];
           
        }
        int sum=n*(n+1)/2;

return sum-ttl;


        
    }
}