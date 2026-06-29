class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;


        for(int i=0;i<patterns.size();i++){
            string x=patterns[i];

            if(word.find(x)!=-1){
                count++;
            }
        }
        return count;
    }
};