class Solution {
public:
vector<vector<int>>ans;
void check(int idx,vector<int>&nums,vector<int>&temp,vector<bool>&used){
    int n=nums.size();

    if(idx==n){
        ans.push_back(temp);
    }
    for(int i=0;i<nums.size();i++){
        if (!used[i]) {
                temp.push_back(nums[i]);
                used[i] = true;

                check(idx + 1, nums, temp, used);

                temp.pop_back();
                used[i] = false;
            }

}
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        vector<bool>used(n,false);
        check(0,nums,temp,used);
        return ans;

    }
};