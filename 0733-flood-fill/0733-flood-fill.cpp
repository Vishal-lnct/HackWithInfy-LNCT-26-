class Solution {
public:
void check(vector<vector<int>>& image, int i, int j, int color,int x){
int m=image.size();
int n=image[0].size();


if(i<0 ||j<0 ||i>=m||j>=n||image[i][j]!=x||image[i][j]==color){
    return;
}
image[i][j]=color;
check(image,i+1,j,color,x);
check(image,i,j+1,color,x);
check(image,i-1,j,color,x);
check(image,i,j-1,color,x);

}


    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int x=image[sr][sc];
        check(image,sr,sc,color,x);
        return image;
        
    }
};