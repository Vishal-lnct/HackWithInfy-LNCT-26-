class Solution {
public:
int t[1001][1001];
int check(int i,int j,string &s1,string& s2){
    if(i>=s1.size()||j>=s2.size()){
        return 0;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }
    if(s1[i]==s2[j]){
        return t[i][j]= 1+check(i+1,j+1,s1,s2);
    }else{
       return t[i][j]= max(check(i+1,j,s1,s2),check(i,j+1,s1,s2));
    }



}
    int longestCommonSubsequence(string s1, string s2) {
        memset(t,-1,sizeof(t));
        return check(0,0,s1,s2);
    }
};