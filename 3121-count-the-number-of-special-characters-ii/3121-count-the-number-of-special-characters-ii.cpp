class Solution {
public:
    int numberOfSpecialChars(string word) {
        
unordered_map<char,int> lower;
unordered_map<char,int> upper;

for(int i=0;i<word.size();i++){

    if(islower(word[i])){
        lower[word[i]] = i;
    }
    else{

        char ch = tolower(word[i]);

        if(upper.find(ch) == upper.end()){
            upper[ch] = i;
        }
    }
}
int count=0;

set<char>s(word.begin(),word.end());
for(auto& x:s){

    if(islower(x)){

char t=toupper(x);
if(lower.find(x)!=lower.end() &&
   upper.find(x)!=upper.end() &&
   lower[x] < upper[x]){
    
    count++;
}

    }
}
return count;

    }
};