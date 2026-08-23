class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        unordered_map<int,int>ans;

        int sum=0;
        ans[0]=1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(ans.find(sum-goal)!=ans.end()){

                count+=ans[sum-goal];
            }
            ans[sum]++;


        }
        return count;
    }
};