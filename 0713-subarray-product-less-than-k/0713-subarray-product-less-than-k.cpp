class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int left=0;
        int p=1;
        int count=0;
        for(int right=0;right<nums.size();right++){

            p*=nums[right];

            while(p>k){

                p/=nums[left];
                left++;
            }
            if(p<k){
                count+=right-left+1;
            }


        }
        return count;
    }
};