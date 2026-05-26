class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>>ans;

        for(int i=0;i<strs.size();i++){
            string x=strs[i];
            sort(x.begin(),x.end());
            ans[x].push_back(strs[i]);
        }
        vector<vector<string>>res;
        for(auto &p:ans){
            res.push_back(p.second);
        }

        return res;
    }
};