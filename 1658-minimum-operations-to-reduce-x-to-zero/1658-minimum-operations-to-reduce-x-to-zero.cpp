class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();

        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }

        if(sum<x){
            return -1;
        }

        int target=sum-x;
        int left=0;
        int maxi=INT_MIN;
        int k=0;
        for(int right=0;right<nums.size();right++){
            k+=nums[right];

            while(k>target){
                k-=nums[left];
                left++;
                 
            }
            if(k==target){
                maxi=max(maxi,right-left+1);
            }
           


        }

        if(maxi==INT_MIN){
            return -1;
        }

return  n-maxi;
        
    }
};