class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& mat) {
        

        int row=mat.size();
        int col=mat[0].size();

        long long  sum=0;
        int x=0;
        int mn=INT_MAX;

        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                sum+=abs(mat[i][j]);
                if(mat[i][j]<0){
                    x++;
                }
                mn=min(mn,abs(mat[i][j]));
            }
        }
        if(x%2==0){
            return sum;
        }else{
            return sum-2*mn;
        }
    }
};