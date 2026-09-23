class Solution {
public:
int t[201][201];
int check(int i,int j,vector<vector<int>>& grid){

    int m=grid.size();
    int n=grid[0].size();
if(t[i][j]!=-1){
    return t[i][j];
}
     if (i == m - 1 && j == n - 1) {
            return grid[i][j];
        }

   if (i >= m || j >= n) {
            return INT_MAX;
        }

    int a=check(i+1,j,grid);
    int b=check(i,j+1,grid);

    return  t[i][j]=grid[i][j]+min(a,b);

}
    int minPathSum(vector<vector<int>>& grid) {
 memset(t,-1,sizeof(t));
        return check(0,0,grid);
        
    }
};