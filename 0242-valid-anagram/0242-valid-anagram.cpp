class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int>ans(26);
        for(int i=0;i<s.size();i++){
            ans[s[i]-'a']++;
        }

        for(int i=0;i<t.size();i++){
            ans[t[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(ans[i]!=0){
                return false;
            }
        }
        return true;
        
    }
};