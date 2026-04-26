class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();

        vector<int>res(n,0);
        for(int i=0;i<nums.size();i++){

        if(nums[i]==0){
            res[i]=0;
        }else if(nums[i]>0){
            int p=(i+nums[i])%n;
            res[i]=nums[p];
        }else{
          int p = ((i + nums[i]) % n + n) % n;
            res[i]=nums[p];
        }


        }
        return  res;
        
    }
};