class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        vector<pair<int,int>>ans;

        for(int i=0;i<pairs.size();i++){
            ans.push_back({pairs[i][1],pairs[i][0]});
        }
        sort(ans.begin(),ans.end());
        int count=1;
        int lst=ans[0].first;
        for(int i=1;i<ans.size();i++){
            if(ans[i].second>lst){
                count++;
                lst=ans[i].first;
            }
        }
       return count;
    }
};