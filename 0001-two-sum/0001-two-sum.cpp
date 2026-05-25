class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ans;

        
        

        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(ans.find(x)!=ans.end()){
                return {i,ans[x]};
            }else{
                ans[nums[i]]=i;
            }
        }
        return {};
    }
};