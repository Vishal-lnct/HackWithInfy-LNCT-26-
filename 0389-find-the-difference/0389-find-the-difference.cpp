class Solution {
public:
    char findTheDifference(string s, string t) {

        vector<int>p(26);
        for(int i=0;i<t.size();i++){
p[t[i]-'a']++;
        }
                for(int i=0;i<s.size();i++){
p[s[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(p[i]>0){
                return i+'a';
            }
        }
        return ' ';
    }
};