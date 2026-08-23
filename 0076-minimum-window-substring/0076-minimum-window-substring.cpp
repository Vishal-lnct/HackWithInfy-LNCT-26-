class Solution {
public:
    string minWindow(string s, string t) {

                unordered_map<char,int> ans;

        for(int i = 0; i < t.size(); i++){
            ans[t[i]]++;
        }

        int count = t.size();

        int start = -1;
        int mini = INT_MAX;

        int left = 0;

        for(int right = 0; right < s.size(); right++){

            if(ans.find(s[right]) != ans.end()){

                if(ans[s[right]] > 0){
                    count--;
                }

                ans[s[right]]--;
            }

            while(count == 0){

                if(right-left+1 < mini){
                    mini = right-left+1;
                    start = left;
                }

                if(ans.find(s[left]) != ans.end()){

                    ans[s[left]]++;

                    if(ans[s[left]] > 0){
                        count++;
                    }
                }

                left++;
            }
        }

        if(start == -1){
            return "";
        }

        return s.substr(start, mini);
    }
};