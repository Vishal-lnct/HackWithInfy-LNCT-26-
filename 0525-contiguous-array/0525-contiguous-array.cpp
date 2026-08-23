class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        unordered_map<int,int>ans;

        ans[0]=-1;
int maxi=INT_MIN;
int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                sum++;

            }else{
                sum--;
            }
            if(ans.find(sum)!=ans.end()){
                maxi=max(maxi,i-ans[sum]);
            }else{

                ans[sum]=i;
            }


        }
        if(maxi==INT_MIN){
            return 0;
        }
      
       return maxi; 
    }
};