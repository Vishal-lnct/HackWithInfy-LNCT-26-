class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char,int>ans;

        int maxf=0;
        int maxi=INT_MIN;
int left=0;
        for(int i=0;i<s.size();i++){
     ans[s[i]]++;
     maxf=max(maxf,ans[s[i]]);

     while(i-left+1-maxf>k){

        ans[s[left]]--;
        left++;
     }
     maxi=max(maxi,i-left+1);


        }
        return maxi;
        
    }
};