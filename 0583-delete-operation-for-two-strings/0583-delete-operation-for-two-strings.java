class Solution {

int check(int i,int j,String word1, String word2,int[][] dp){

    int m=word1.length();
    int n=word2.length();


      if (i == m) {
            return n - j;
        }

        // word2 khatam
        if (j == n) {
            return m - i;
        }

   if(dp[i][j]!=-1){
    return dp[i][j];
}
      if (word1.charAt(i) == word2.charAt(j)) {
            return check(i + 1, j + 1, word1, word2,dp);
        }
    int a=1+check(i+1,j,word1,word2,dp);
    int b=1+check(i,j+1,word1,word2,dp);
     
    

return dp[i][j]= Math.min(a,b);
}
    public int minDistance(String word1, String word2) {
     
 int m=word1.length();
    int n=word2.length();
    int[][] dp=new int[m][n];

    for(int i=0;i<m;i++){
        Arrays.fill(dp[i],-1);
    }
        return check(0,0,word1,word2,dp);
    }
}