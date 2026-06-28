class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int,int>ans;
        ans[0]=1;

        int sum=0;
        int count=0;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

            int x=sum-k;
            if(ans.find(x)!=ans.end()){
                count+=ans[sum-k];
            }

            ans[sum]++;
        }

       return count; 
    }
};