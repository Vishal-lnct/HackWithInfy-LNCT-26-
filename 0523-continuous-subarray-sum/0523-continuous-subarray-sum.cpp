class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        unordered_map<int,int>ans;
        ans[0]=-1;
int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int p=sum%k;

            if(ans.find(p)!=ans.end() && i-ans[p]>=2 ){
                return true;
            }
            if(ans.find(p)==ans.end()){
                ans[p]=i;
            }

        }
        return false;
    }
};