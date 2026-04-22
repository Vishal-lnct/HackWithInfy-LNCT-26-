class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<pair<int,int>>ans;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
               ans.push_back({i,j});
            }
        }
        vector<pair<int,pair<int,int>>>x;
        for(int i=0;i<ans.size();i++){
            int p=ans[i].first;
            int q=ans[i].second;

            int z=abs(p-rCenter)+abs(q-cCenter);
            x.push_back({z,{p,q}});


        }
        sort(x.begin(),x.end());
        vector<vector<int>>res;

        for(int i=0;i<x.size();i++){
            int  m=x[i].second.first;
            int n=x[i].second.second;

            res.push_back({m,n});
        }


     return res;   
    }
};