class Solution {
public:
int t[101][101];
int check(int i,int j,int m,int n){
    if(i>m-1||j>n-1){
        return 0;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }

    if(i==m-1 && j==n-1){
        return 1;
    }

   int a= check(i+1,j,m,n);
   int b=check(i,j+1,m,n);
   return t[i][j]=a+b;
}
    int uniquePaths(int m, int n) {
memset(t,-1,sizeof(t));
       return check(0,0,m,n);
        
    }
};