class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        int i=0;
        int j=tokens.size()-1;

        int ans=0;
           int  x=0;
        sort(tokens.begin(),tokens.end());

        while(i<=j){
         

            if(power>=tokens[i]){
                power-=tokens[i];
                x++;
                i++;
                ans=max(ans,x);
                
            }else if(power<tokens[i]){
                if(x>0){
                    power+=tokens[j];
                    x--;
                    j--;
                       
                }else{
                break;
            }
            
        }
        }
        return ans;
    }
};