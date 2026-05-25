class Solution {
public:
    vector<int> plusOne(vector<int>&s) {
        int n=s.size()-1;

        for(int i=n;i>=0;i--){
            if( s[i]==9){
                s[i]=0;
                

            }else{
                s[i]=s[i]+1;
                return s;
            }
        }
            s.insert(s.begin(),1);
            return s;
    }
};