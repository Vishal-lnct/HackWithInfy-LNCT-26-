class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {

        if(grid.empty() || grid[0].empty()) return false;
                int row=grid.size();
        int col=grid[0].size();

        long long  sum=0;
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=grid[i][j];
        }
      }
      if(sum%2!=0){
        return false;
      }
      long long  target=sum/2;
      long long sum1=0;
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum1+=grid[i][j];
        }
        if(sum1==target){
            return true;
        }
      }

       long long sum2=0;
      for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            sum2+=grid[j][i];
        }
        if(sum2==target){
            return true;
        }
      }
        return false;
        
    }
};