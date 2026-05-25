class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
sum+=nums[i];

maxi=max(maxi,sum);
if(sum<0){
    sum=0;
}
        }
        // if(maxi==INT_MIN){
        //     return -1;
        // }
      return maxi;  
    }
};