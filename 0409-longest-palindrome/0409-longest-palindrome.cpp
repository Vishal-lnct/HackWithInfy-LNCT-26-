class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>ans;

        for(int i=0;i<s.size();i++){
            ans[s[i]]++;
        }
        int sum=1;
        bool  p=false;
        for(auto &x:ans){
            if(x.second>=2){
                int a=x.second/2;
                int b=a*2;
                sum+=b;
                if(b%2!=0){
                    p=true;
                }
            }
            
        }
        if(p==true){
            sum+=1;
        }
        return sum;
    }
};