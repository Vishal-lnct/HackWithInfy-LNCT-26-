class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        if(n==1){
            return 1;
        }
    // cout<<s[n-1];
    int j=n-1;
    while(j>=0 &&s[j]==' ' ){
        j--;
        
    }
    
    int count=0;
    while(j>=0 && s[j]!=' '  ){
        count++;
        
        j--;
        
    }
    return count;
    }
};