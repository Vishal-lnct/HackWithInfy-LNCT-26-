class Solution {
public:
    int divisorSubstrings(int num, int k) {
       int count =0;
       string s=to_string(num);
       for(int i=0;i<=s.size()-k;i++){
        string x=s.substr(i,k);
        int p=stoi(x);
        if(p!=0&&num%p==0){
            count++;
        }
       }
        return count;
    }
};