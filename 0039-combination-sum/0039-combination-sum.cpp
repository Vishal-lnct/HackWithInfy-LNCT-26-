class Solution {
public:

vector<vector<int>>ans;

void check(int i,vector<int>&candidates,int target,vector<int>&temp){
if(target==0){
    ans.push_back(temp);
    return;
}

if(i>=candidates.size() || target<0){
    return ;
}
temp.push_back(candidates[i]);
check(i,candidates,target-candidates[i],temp);
temp.pop_back();
check(i+1,candidates,target,temp);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        check(0,candidates,target,temp);
        return ans;
    }
};