class Solution {
public:
    bool isPalindrome(string s) {

        string x="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                x+=tolower(s[i]);
            }
        }
        int i=0;
        int j=x.size()-1;
 cout<<x;
        while(i<j){

            if(x[i]!=x[j]){
                return false;
            }
            i++;
            j--;
        }
       
        return true;
    }
};