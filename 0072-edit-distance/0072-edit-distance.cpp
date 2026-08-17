class Solution {
public:
int t[501][501];
int check(int i,int j,string word1, string word2){

    if(i>=word1.size()){
        return word2.size()-j;
    }
    if(j>=word2.size()){
        return word1.size()-i;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }

    if(word1[i]==word2[j]){
        return check(i+1,j+1,word1,word2);
    }else{

int a=check(i+1,j,word1,word2);
int b=check(i,j+1,word1,word2);
int c=check(i+1,j+1,word1,word2);

return t[i][j]= 1+ min({a,b,c});

    }

    



}
    int minDistance(string word1, string word2) {
        memset(t,-1,sizeof(t));
        return check(0,0,word1,word2);
    }
};