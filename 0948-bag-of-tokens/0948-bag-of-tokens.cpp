class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {

        sort(tokens.begin(),tokens.end());

        int i=0;
        int j=tokens.size()-1;
    int score=0;
    int maxi=0;

        while(i<=j){
    if(power>=tokens[i]){
        power-=tokens[i];
        score++;
        maxi=max(maxi,score);
        i++;

    }else {
        if(score>=1){
            power+=tokens[j];
            j--;
            score--;
            maxi=max(score,maxi);
        }else{
            break;
        }
    }


        }
        return maxi;
        
    }
};