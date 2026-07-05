class Solution {
public:

bool check(int i,int j,string& s){
    int n=s.size();
    
    if(i>j ){
        return true;
    }
    
    if(s[i]!=s[j]){
        return false;
    }
    if(s[i]==s[j]){
        return check(i+1,j-1,s);
    }
    return true;
}
    string longestPalindrome(string s) {
            
    int maxi=0;
    int  st=-1;
    for(int i=0;i<s.size();i++){
        
        for(int j=i;j<s.size();j++){
           if(check(i,j,s)){
             int p=j-i+1;
             if(p>maxi){
                 maxi=max(maxi,p);
                 st=i;
             }
               
           } 
        }
    }
  
  return s.substr(st,maxi);
    }
};