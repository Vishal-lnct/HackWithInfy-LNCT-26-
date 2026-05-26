class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char,int>ans;

        for(int i=0;i<s.size();i++){

            char a=s[i];

            char b=t[i];

            if(ans.find(a)!=ans.end() && ans[a]!=b){
                return false;
            }else{
                 for(auto & x:ans){
                    if(x.second==b && x.first!=a){
                        return false;
                    }
                 }


            }
            ans[a]=b;
        }

       return true; 
    }
};