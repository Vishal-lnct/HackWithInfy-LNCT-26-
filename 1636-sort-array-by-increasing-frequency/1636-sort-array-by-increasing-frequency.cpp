class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }

            vector<pair<int,int>>p;

            for(int i=0;i<nums.size();i++){

                p.push_back({nums[i],ans[nums[i]]});
            }

            sort(p.begin(),p.end(),[](pair<int,int>&a,pair<int,int>&b){
                if(a.second==b.second){
                    return a.first>b.first;
                }
                return a.second<b.second;    
                
            });
            vector<int>res;
            
         for(int i=0;i<p.size();i++){
            res.push_back(p[i].first);
         }
         return res;
        
    }
};