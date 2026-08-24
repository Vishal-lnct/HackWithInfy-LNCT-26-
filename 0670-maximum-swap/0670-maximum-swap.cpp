class Solution {
public:
    int maximumSwap(int num) {

        string s=to_string(num);

        int maxi=INT_MIN;
        int x=-1;
        for(int i=0;i<s.size();i++){
            int maxi=s[i]-'0';
            int x=i;
            for(int j=i+1;j<s.size();j++){
                if(s[j]-'0'>=maxi){
                    maxi=s[j]-'0';
                    x=j;
                }
            }
            if(x!=i && s[x]>s[i]){

                swap(s[i],s[x]);
                break;
            }

           
            
        }
    //    swap(s[0],s[x]);

       int ans=0;
       for(int i=0;i<s.size();i++){
        ans=ans*10+s[i]-'0';
       }
       cout<<ans;
       return ans;
    }
};