class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>ans;
        for(int i=0;i<s.size();i++){
            ans[s[i]]++;

        }
        bool t=false;
        int  sum=0;
        for(auto &x:ans){
            int p=x.second;
            if(p>=2 ){
                int a=p/2;
                int b=a*2;
                sum+=b;
            }
            if(p%2!=0){
                t=true;
            }
            

            
        }

        if(t==true){
            return sum+1;
        }
        return sum;
        
    }
};