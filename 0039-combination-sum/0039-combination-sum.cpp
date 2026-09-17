class Solution {
public:
vector<vector<int>>ans;

void check(int i,vector<int>& candidates, int target,vector<int>&x){

    int n=candidates.size();
    if(i>=n || target<0){
        return;
    }

    if(target==0){
        ans.push_back(x);
        return;
    }
    x.push_back(candidates[i]);
    check(i,candidates,target-candidates[i],x);
    x.pop_back();
    check(i+1,candidates,target,x);
    
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>x;

        check(0,candidates,target,x);
        return ans;
        
    }
};