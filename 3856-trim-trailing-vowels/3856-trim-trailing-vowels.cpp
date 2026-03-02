class Solution {
public:

    bool vowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            return true;
        }
        return false;
    }
    string trimTrailingVowels(string s) {
       string x;
        int n=s.size();
      int last = n - 1;
        while(last >= 0 && vowel(s[last])){
            last--;
        }

        
        for(int i = 0; i <= last; i++){
            x += s[i];
        }
        return x;
    }
};