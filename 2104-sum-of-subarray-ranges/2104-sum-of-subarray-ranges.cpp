class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {

        long long sum=0;

        for(int i=0;i<nums.size();i++){
            int maxi=nums[i];
            int mini=nums[i];

            for(int j=i;j<nums.size();j++){

                if(nums[j]>maxi){
                    maxi=nums[j];
                }
                if(nums[j]<mini){
                    mini=nums[j];
                }

                sum+=(long long)(maxi-mini);
            }
        }
        return sum;
    }
};