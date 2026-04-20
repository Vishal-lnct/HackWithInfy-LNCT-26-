class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size()==1){
            return s;
        }
     
        map<char,int>ans;
        for(int i=0;i<s.size();i++){
            ans[s[i]]++;
        }
      
        string x;
        char mid=0;
      bool t=false;

        for(auto  & i:ans){
            if((i.second)%2!=0){
                mid=i.first;
               
             
            }

             x += string(i.second / 2, i.first);
        }
       
        string p=x;
    reverse(x.begin(),x.end());
        
        if(mid){
            return  p+mid+x;
        }else{
            return p+x;
        }
        
        
    }
};