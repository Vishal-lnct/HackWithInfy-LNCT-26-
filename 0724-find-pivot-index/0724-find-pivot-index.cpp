class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int sum=0;
       for(int i=0;i<nums.size();i++){
        sum+=nums[i];
       } 

       int ttl=0;
       for(int i=0;i<nums.size();i++){

        if(ttl==sum-ttl-nums[i]){
            return i;
        }
        ttl+=nums[i];
       }

       return -1;
    }
};