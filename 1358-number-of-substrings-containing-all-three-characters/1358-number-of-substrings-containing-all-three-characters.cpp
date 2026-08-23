class Solution {
public:
    int numberOfSubstrings(string s) {
        
         unordered_map<char,int> ans;

        int count = 0;
        int left = 0;

        for(int i = 0; i < s.size(); i++){

            ans[s[i]]++;

            while(ans.size() == 3){

                ans[s[left]]--;

                if(ans[s[left]] == 0){
                    ans.erase(s[left]);
                }

                left++;
            }

            count += left;
        }

        return count;
    }
};