class Solution {
public:

 bool isvowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        return true;
    }
    return false;
}

    string reverseVowels( string s) {

        string temp;
        for(int i=s.size()-1;i>=0;i--){
            if(isvowel(s[i])){
                temp+=s[i];
            }
        }
int j=0;
       for(int i=0;i<s.size();i++){
        if(isvowel(s[i])){
            s[i]=temp[j];
            j++;
        }

       } 
        return s;
    }
};