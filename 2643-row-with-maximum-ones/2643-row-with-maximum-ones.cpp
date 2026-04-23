class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<pair<int,int>>ans;
        int row=mat.size();
        int col=mat[0].size();
        // int maxi=INT_MIN;
        for(int i=0;i<row;i++){
            int x=0;
            for(int j =0;j<col;j++){
                if(mat[i][j]==1){
                    x++;
                }
            }
          ans.push_back({x,i});
        }
              sort(ans.begin(), ans.end(), [](pair<int,int> &p1, pair<int,int> &p2){
    if(p1.first == p2.first)
        return p1.second < p2.second; 
    return p1.first > p2.first; 
});
        vector<int>res;

        res.push_back(ans[0].second);
        res.push_back(ans[0].first);
        return res;
        

        
    }
};