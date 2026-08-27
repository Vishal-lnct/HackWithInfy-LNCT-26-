class Solution {
public:
    char findTheDifference(string s, string t) {

        vector<int>x(26,0);
        for(int i=0;i<t.size();i++){
            x[t[i]-'a']++; 
        }

        for(int i=0;i<s.size();i++){
            x[s[i]-'a']--;
        }

        for(int i=0;i<x.size();i++){
         if(x[i]>0){
            return i+'a';
         }
        }
        return ' ' ;
    }
};