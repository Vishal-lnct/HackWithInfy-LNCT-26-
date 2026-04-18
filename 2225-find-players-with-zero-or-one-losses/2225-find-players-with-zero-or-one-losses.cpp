class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& mat) {

        int row=mat.size();
int col=mat[0].size();

unordered_map<int,int>ans;

for(int i=0;i<mat.size();i++){
    ans[mat[i][1]]++;
}

vector<int>x;
vector<int>y;

    for(int i=0;i<row;i++){
        int win=mat[i][0];
        int loss=mat[i][1];
        if(ans.find(win)==ans.end()){
            x.push_back(win);
            ans[win]=1;
        }
         if(ans[loss]==1){
            y.push_back(loss);
        }
    
}
sort(x.begin(),x.end());
sort(y.begin(),y.end());

vector<vector<int>>t;
t.push_back(x);
t.push_back(y);
return t;
        
    }
};