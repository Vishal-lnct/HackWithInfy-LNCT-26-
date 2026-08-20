class Solution {
public:

void check(int i,int j,vector<vector<char>>& grid ,vector<vector<bool>>&vis){
int m=grid.size();
int n=grid[0].size();
if(i<0 || i>=m ||j<0||j>=n||vis[i][j]==true||grid[i][j]!='1'){
    return;

}
vis[i][j]=true;
check(i+1,j,grid,vis);
check(i,j+1,grid,vis);
check(i-1,j,grid,vis);
check(i,j-1,grid,vis);


}
    int numIslands(vector<vector<char>>& grid) {
int m=grid.size();
int n=grid[0].size();
vector<vector<bool>>vis(m,vector<bool>(n,false));
int count=0;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(vis[i][j]==false && grid[i][j]=='1'){
            count++;
            check(i,j,grid,vis);

        }
    }
}





return count;

        
    }
};