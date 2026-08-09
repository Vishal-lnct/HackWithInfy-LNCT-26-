class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char,int>ans;

        int maxi=0;
        int count=0;

        int left=0;
        for(int right=0;right<s.size();right++){
 
            while(ans[s[right]]>0){
                ans[s[left]]--;
                left++;
                
            }
           maxi=max(right-left+1,maxi);
            ans[s[right]]++;
        }
        return maxi;
    }
};