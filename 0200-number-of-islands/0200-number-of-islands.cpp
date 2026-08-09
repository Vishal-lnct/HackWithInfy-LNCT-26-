class Solution {
public:

void check(vector<vector<char>>& grid,int i,int j,vector<vector<bool>>&vis){
int  m=grid.size();
        int n=grid[0].size();

        if(i<0 ||i>=m ||j<0 ||j>=n||vis[i][j]||grid[i][j]!='1'){
            return;
        }
        vis[i][j]=true;
        check(grid,i+1,j,vis);
        check(grid,i,j+1,vis);
        check(grid,i-1,j,vis);
        check(grid,i,j-1,vis);



}
    int numIslands(vector<vector<char>>& grid) {
        int  m=grid.size();
        int n=grid[0].size();
   vector<vector<bool>> vis(m, vector<bool>(n, false));
int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
if(grid[i][j]=='1' && vis[i][j]==false){
    count++;
    check(grid,i,j,vis);
}
            }
        }
return count;
    }
};