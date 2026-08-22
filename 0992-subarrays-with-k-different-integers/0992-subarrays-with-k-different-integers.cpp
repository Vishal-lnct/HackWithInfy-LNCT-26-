class Solution {
public:

int check(vector<int>& nums, int k){
    int n=nums.size();
   
     unordered_map<int,int>ans;
        int count=0;
        int left=0;
        for(int right=0;right<nums.size();right++){

            ans[nums[right]]++;
            while(ans.size()>k){
                ans[nums[left]]--;
                if(ans[nums[left]]==0){
                    ans.erase(nums[left]);
                }
                left++;
            }


    count+=right-left+1;

        }
        return count;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        

    return check(nums,k)-check(nums,k-1);
  
        
    }
};