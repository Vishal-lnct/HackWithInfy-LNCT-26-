class Solution {
public:

vector<vector<string>>res;

bool  check(string x,int l,int r){
    while(l<r){
        if(x[l]!=x[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}


void backtrack(int idx,string& x,vector<string>&temp){
if(idx == x.size()) {
            res.push_back(temp);
            return;
        }

        for(int i = idx; i < x.size(); i++) {

            string part = x.substr(idx, i - idx + 1);

            if(check(part, 0, part.size()-1)) {

                temp.push_back(part);

                backtrack(i + 1, x, temp);

                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
backtrack(0,s,temp);
return res;
        
    }
};