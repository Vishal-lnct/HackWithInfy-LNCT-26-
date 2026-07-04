class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>ans;

        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }

        vector<pair<int,int>>x;

        for(auto &p:ans){
            x.push_back({p.second,p.first});
        }
        sort(x.rbegin(),x.rend());

        vector<int>res;
        for(int i=0;i<k;i++){

res.push_back(x[i].second);
        }
       return res; 
    }
};