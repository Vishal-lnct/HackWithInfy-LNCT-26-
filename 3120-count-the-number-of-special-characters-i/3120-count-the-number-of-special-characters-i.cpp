class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>x(26,0);
        vector<int>y(26,0);

        for(int i=0;i<word.size();i++){
            if(islower(word[i])){
                x[word[i]-'a']=1;
            }else{
 y[word[i]-'A']=1;
            }
        }

        int count=0;
        for(int i=0;i<26;i++){
            if(x[i]==1 && y[i]==1){
                count++;
            }
        }
        return count;
    }
};