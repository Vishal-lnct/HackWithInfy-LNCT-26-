class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0;
        int left=0;
        int  p=1;
        if(k <= 1) return 0;
        for(int right=0;right<nums.size();right++){
              p=p*nums[right];
            while(p>=k){
                p/=nums[left];
                left++;
            }
          
            count+=right-left+1;
        }
        return count;
    }
};