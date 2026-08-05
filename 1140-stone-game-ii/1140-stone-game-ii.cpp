class Solution {
public:
int t[2][101][101];
int solve(vector<int>&piles,int i,int person,int M){

int n=piles.size();
if(i>=n){
    return 0;
}
if(t[person][i][M]!=-1){
    return t[person][i][M];
}
if(person==1){

    int ans=INT_MIN;

    int score=0;

    for(int X=1;X<=min(n-i,2*M);X++){
         score+=piles[i+X-1];
        ans = max(score + solve(piles, i+X, 0, max(M,X)), ans);
    }
    return  t[person][i][M]=ans;
    
    }
    else{
int ans=INT_MAX;

 for(int X=1;X<=min(n-i,2*M);X++){
ans = min(solve(piles, i+X, 1, max(M,X)), ans);

    }

return  t[person][i][M]=ans;

}
}
    int stoneGameII(vector<int>& piles) {

        memset(t,-1,sizeof(t));
       return  solve(piles,0,1,1);
        
    }
};