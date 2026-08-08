class Solution {
public:

void check(vector<vector<int>>&image,int sr,int sc,int color,int p){

    int m=image.size();
    int n=image[0].size();

    if(sr < 0 || sr >= m || sc < 0 || sc >= n){
    return;
}

 if(image[sr][sc] != p) {
            return;
        }
   image[sr][sc] = color;
    check(image,sr+1,sc,color,p);
    check(image,sr,sc+1,color,p);
    check(image,sr-1,sc,color,p);
    check(image,sr,sc-1,color,p);


    
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int p=image[sr][sc];
         if(p == color) {
            return image;
        }
        check(image,sr,sc,color,p);
        return image;

    }
};