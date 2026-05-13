class Solution {
public:
    int getLucky(string s, int k) {

// string p=s;
 string x;
  for(int i=0;i<s.size();i++){
                x+=to_string(s[i]-'a'+1);
                
            }
        while(k--){
            // string x;
            int sum=0;
          
            for(int i=0;i<x.size();i++){
                sum+=x[i]-'0';
            }
x=to_string(sum);
            

        }
return stoi(x);
      
    }
};