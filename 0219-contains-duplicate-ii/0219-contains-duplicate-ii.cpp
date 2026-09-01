class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        vector<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back({nums[i],i});
        }

        sort(ans.begin(),ans.end());

        for(int i=1;i<ans.size();i++){
        if(ans[i].first==ans[i-1].first&& ans[i].second-ans[i-1].second<=k){
            return true;
        }
            
        }
        return false;
    }
};