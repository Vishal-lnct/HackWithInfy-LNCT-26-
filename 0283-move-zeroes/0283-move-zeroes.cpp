class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i=0;
        int j=0;
        int n=nums.size()-1;

        while(j<=n){
            if(nums[i]!=0 && nums[j]!=0){
               
                i++;
                j++;
            }else if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }else if(nums[i]==0 && nums[j]==0){
                j++;
            }


        }
        // return nums;
    }
};