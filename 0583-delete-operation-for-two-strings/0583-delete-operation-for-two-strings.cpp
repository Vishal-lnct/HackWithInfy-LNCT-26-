class Solution {
public:
int t[501][501];
int check( int i,int j,string word1,string word2){

if(i>word1.size()-1){
    return word2.size()-j;
}

if(t[i][j]!=-1){
    return t[i][j];
}
if(j>word2.size()-1){
    return word1.size()-i;
}

if(word1[i]==word2[j]){
    return  t[i][j]=check(i+1,j+1,word1,word2);
}
else{

    return  t[i][j]=1+min(check(i+1,j,word1,word2),check(i,j+1,word1,word2));
}



}
    int minDistance(string word1, string word2) {
memset(t,-1,sizeof(t));
        return check(0,0,word1,word2);
        
    }
};