class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

       string x=strs[0];
         string ans = "";
       for(int i=0;i<x.size();i++){
      char ch=x[i];

      for(int j=1;j<strs.size();j++){


        string p=strs[j];
 if (i >= p.size() || p[i] != ch) {
                    return ans;
                }
        
      }
      ans = ans + ch;
        
       }
        return ans;
    }
};