class Solution {
public:
vector<vector<int>>ans;

void check(int i,vector<int>&nums,vector<int>&temp){
    int n=nums.size();
    
    if(i==n){
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    check(i+1,nums,temp);
    temp.pop_back();
    check(i+1,nums,temp);




}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        check(0,nums,temp);
        return ans;
    }
};