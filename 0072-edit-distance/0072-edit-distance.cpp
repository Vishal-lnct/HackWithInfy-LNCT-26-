class Solution {
public:
int t[501][501];
int check(int i,int j,string word1,string word2){

int m=word1.size();
int n=word2.size();

if(i>=m){
    return n-j;
}

if(j>=n){
    return m-i;
}
if(t[i][j]!=-1){
    return t[i][j];
}

if(word1[i]==word2[j]){
    return check(i+1,j+1,word1,word2);
}
return  t[i][j]=1+ min({


    check(i+1,j,word1,word2),
    check(i,j+1,word1,word2),
    check(i+1,j+1,word1,word2)

}

    
);

   
}
    int minDistance(string word1, string word2) {
memset(t,-1,sizeof(t));
        return check(0,0,word1,word2);

        
    }
};