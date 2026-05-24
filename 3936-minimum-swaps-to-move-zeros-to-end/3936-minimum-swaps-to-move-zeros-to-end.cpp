class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int z=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                z++;
            }
        }

        int p=nums.size()-z;
        int ans=0;
        for(int i=p;i<nums.size();i++){
if(nums[i]!=0){
    ans++;
}
        }
        return ans;
    }
};