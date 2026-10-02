class Solution {
public:
    int characterReplacement(string s, int k) {

        int ans=INT_MIN;
        int maxi=INT_MIN;
        unordered_map<char,int>x;
int left=0;
        for(int right=0;right<s.size();right++){
            x[s[right]]++;
            maxi=max(maxi,x[s[right]]);

        
        while(right-left+1>maxi+k){
          x[s[left]]--;
            left++;
        }
        ans=max(ans,right-left+1);
        }
        return ans;
        
    }
};