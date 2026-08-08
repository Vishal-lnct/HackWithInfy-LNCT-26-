class Solution {
public:

vector<string>ans;

bool  valid(string s){
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            count++;
        }else{
            count--;
            if(count<0){
                return  false;
            }
        }
    }
    if(count==0){
        return true;
    }else{
        return false;
    }
}


void check(int n,string &temp){

if(temp.size() == 2*n){
    if(valid(temp)){
        ans.push_back(temp);
    }
    return;
}
temp.push_back('(');
check(n,temp);
temp.pop_back();

temp.push_back(')');
check(n,temp);
temp.pop_back();



}
    vector<string> generateParenthesis(int n) {
string temp="";

check(n,temp);
return ans;


        
    }
};