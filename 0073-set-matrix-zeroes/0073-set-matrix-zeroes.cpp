class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int m=matrix.size();
        int n=matrix[0].size();

        vector<int>a;
        vector<int>b;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    a.push_back(i);
                    b.push_back(j);
                }
            }
        }

        for(int i=0;i<a.size();i++){
            int p=a[i];

            for(int j=0;j<n;j++){
                matrix[p][j]=0;
            }
        }

          for(int i=0;i<a.size();i++){
            int q=b[i];

            for(int j=0;j<m;j++){
                matrix[j][q]=0;
            }
        }
        
    }
};