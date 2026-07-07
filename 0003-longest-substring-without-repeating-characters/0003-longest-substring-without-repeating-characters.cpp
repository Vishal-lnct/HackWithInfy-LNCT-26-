class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char ,int>ans;

       int maxi=0;
       int left=0;
       for(int right=0;right<s.size();right++){


        ans[s[right]]++;
        while(ans[s[right]]>1){

            ans[s[left]]--;
            left++;
         
        }
           maxi=max(maxi,right-left+1);
       }
       
       return maxi; 
    }
};