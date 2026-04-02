class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer>ans=new HashMap<>();

        for(int i=0;i<nums.length;i++){
        int x=target-nums[i];

        if(ans.containsKey(x)){
        return new int[]{ans.get(x),i};
        }
        ans.put(nums[i],i);
        }

return new int[]{};
    }
}