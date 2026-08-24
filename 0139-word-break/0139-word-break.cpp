class Solution {
public:

    bool check(int i, string s, vector<string>& wordDict,
               unordered_set<string>& ans,vector<int>&dp) {

        int n = s.size();

        if(i >= n) {
            return true;
        }
        if(dp[i]!=-1){
            return dp[i];
        }

        for(int j = i; j < n; j++) {

            string x = s.substr(i, j-i+1);

            if(ans.find(x) != ans.end()) {

                if(check(j+1, s, wordDict, ans,dp)) {
                    return dp[i]= true;
                }
            }
        }

        return dp[i]= false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {

        int n=s.size();
        vector<int>dp(n,-1);

        unordered_set<string> ans;

        for(int i = 0; i < wordDict.size(); i++) {
            ans.insert(wordDict[i]);
        }

        return check(0, s, wordDict, ans,dp);
    }
};