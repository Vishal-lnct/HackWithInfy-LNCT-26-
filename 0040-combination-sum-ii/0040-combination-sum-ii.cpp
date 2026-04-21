class Solution {
public:
vector<vector<int>>ans;

void check(int idx,vector<int>& candidates, int target,vector<int>temp){
    if(target==0){
        ans.push_back(temp);
    }
    if(target<0){
        return;
    }
    for(int i=idx;i<candidates.size();i++){
        if(i>idx && candidates[i]==candidates[i-1]){
            continue;
        }
        temp.push_back(candidates[i]);
        check(i+1,candidates,target-candidates[i],temp);
        temp.pop_back();
    }
    
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>temp;

        sort(candidates.begin(),candidates.end());
        check(0,candidates,target,temp);
        return ans;

        
    }
};