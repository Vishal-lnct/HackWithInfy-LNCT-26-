class Solution {
public:
int check(int i,int j,string & word1,string & word2, vector<vector<int>>&dp){
int m=word1.size();
int n=word2.size();

if(i>=m){
    return n-j;
}
if(j>=n){
    return m-i;
}

if(dp[i][j]!=-1){
return dp[i][j];
}
if(word1[i]==word2[j]){
   return check(i+1,j+1,word1,word2,dp);
}
int a=check(i+1,j,word1,word2,dp);
int b=check(i,j+1,word1,word2,dp);
int c=check(i+1,j+1,word1,word2,dp);


return  dp[i][j]=1+min({a,b,c});

}
    int minDistance(string word1, string word2) {

        int m=word1.size();
        int n=word2.size();

        vector<vector<int>>dp(m,vector<int>(n,-1));

        return check(0,0,word1,word2,dp);
        
    }
};