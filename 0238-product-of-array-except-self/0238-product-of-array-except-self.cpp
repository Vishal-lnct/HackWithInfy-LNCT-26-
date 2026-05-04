class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n=nums.size();
        vector<int>ans(n,1);

        int x=1;
        for(int i=0;i<n;i++){
            ans[i]=x;
            x*=nums[i];
        }

        int y=1;
        for(int i=n-1;i>=0;i--){
            ans[i]=ans[i]*y;
            y*=nums[i];


        }
        return ans;
    }
};