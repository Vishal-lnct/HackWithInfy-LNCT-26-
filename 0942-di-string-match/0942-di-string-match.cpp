class Solution {
public:
    vector<int> diStringMatch(string s) {
          int n = s.size();
        int x= 0;
        int  y= n;
        vector<int> ans;

        for(int i = 0; i < n; i++){
            if(s[i] == 'I'){
                ans.push_back(x);
                x++;
            }
            else{
                ans.push_back(y);
                y--;
            }
        }

        ans.push_back(x); 
        return ans;
        
    }
};