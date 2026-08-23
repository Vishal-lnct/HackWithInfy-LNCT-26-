class Solution {
public:
    int longestSubstring(string s, int k) {

        unordered_map<char,int>ans;
        for(int i=0;i<s.size();i++){
            ans[s[i]]++;
        }
        
int i=0;
        while(i<s.size() && ans[s[i]]>=k){
            i++;

        }
        if(i==s.size()){
            return s.size();
        }
        int left=longestSubstring(s.substr(0,i), k);
        int right=longestSubstring(s.substr(i+1), k);
        return max(left,right);


        
    }
};