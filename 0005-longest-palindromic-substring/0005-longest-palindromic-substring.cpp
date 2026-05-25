class Solution {
public:
bool check(int i,int  j,string& s){
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
    string longestPalindrome(string s) {
       int maxi=0;
       int p=-1;
       for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            if(check(i,j,s)){
                if(j-i+1>maxi){
                    maxi=j-i+1;
                    p=i;
                }

            }
        }
       } 
       cout<<p;
    // cout<<maxi;
        return s.substr(p,maxi);
    }
};