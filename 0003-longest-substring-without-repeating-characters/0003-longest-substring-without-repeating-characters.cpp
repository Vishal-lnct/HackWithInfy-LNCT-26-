class Solution {
public:
    int lengthOfLongestSubstring(string s) {
          unordered_map<char, int> ans;
    int left = 0, right = 0;
    int maxLength = 0;

    while (right < s.size()) {
        char c = s[right];
        ans[c]++;

       
        while (ans[c] > 1) {
            ans[s[left]]--;
            left++;
        }

        maxLength = max(maxLength, right - left + 1);
        right++;
    }

    return maxLength ;
        
    }
};