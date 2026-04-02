class Solution {
    public int majorityElement(int[] nums) {
        int n=nums.length;
        HashMap<Integer,Integer>x=new HashMap<>();

        for(int i=0;i<nums.length;i++){
            x.put(nums[i],x.getOrDefault(nums[i], 0) + 1);
        }
   for(Map.Entry<Integer, Integer> p : x.entrySet()){
            if(p.getValue() > n/2){
                return p.getKey();
            }
        }

        return -1; 

    }
}