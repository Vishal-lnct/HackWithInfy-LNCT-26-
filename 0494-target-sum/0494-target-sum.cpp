class Solution {
public:



int check(vector<int>&nums,int i,int  sum,int target){

if(i == nums.size()) {
    if(sum == target)
        return 1;
    return 0;
}
int  plus=check(nums,i+1,sum+nums[i],target);
int minus=check(nums,i+1,sum-nums[i],target);

return plus+minus;
   
}
    int findTargetSumWays(vector<int>& nums, int target) {

       int sum=0;
       int i=0;

       return check(nums,i,sum,target);

    }
};