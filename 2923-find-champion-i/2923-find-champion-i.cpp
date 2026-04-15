class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n=grid.size();
        for(int i=0;i<n;i++){
            bool x=true;

            for(int j=0;j<n;j++){
                if(i!=j && grid[i][j]==0){
                     x=false;
                    break;
                }
            }
            if(x){
                return i;
            }
        }
        return -1;
    }
};