class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        
int row=mat.size();
int col=mat[0].size();


        vector<int>a;
        vector<int>b;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){

                if(mat[i][j]==0){
                    a.push_back(i);
                    b.push_back(j);
                }
            }
        }
        for(int i=0;i<a.size();i++){
            int p=a[i];

            for(int i=0;i<col;i++){
                mat[p][i]=0;
            }
        }

          for(int i=0;i<b.size();i++){
            int q=b[i];

            for(int i=0;i<row;i++){
                mat[i][q]=0;
            }
        }




    }
};