class Solution {
public:


void check(int i, vector<vector<int>>&ans,vector<int>& nums,vector<int>&temp,vector<int>&vis){

    if(temp.size()==nums.size()){
        ans.push_back(temp);
        return;
    }
for(int i=0;i<nums.size();i++){
    if(vis[i]==1){
        continue;
    }
    vis[i]=1;
    temp.push_back(nums[i]);

    check(i+1,ans,nums,temp,vis);
    temp.pop_back();
    vis[i]=0;
    
}
}
    vector<vector<int>> permute(vector<int>& nums) {
int n=nums.size();
        vector<vector<int>>ans;
        vector<int>temp;

        vector<int>vis(n,0);

        check(0,ans,nums,temp,vis);

        return ans;
        
    }
};