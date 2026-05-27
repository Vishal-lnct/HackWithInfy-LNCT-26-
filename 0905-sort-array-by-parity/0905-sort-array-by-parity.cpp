class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        sort(nums.begin(),nums.end());

       
        vector<int>ans;
// int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans.push_back(nums[i]);
                
            }


        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                ans.push_back(nums[i]);
            }
        }



     



return ans;


        
    }
};