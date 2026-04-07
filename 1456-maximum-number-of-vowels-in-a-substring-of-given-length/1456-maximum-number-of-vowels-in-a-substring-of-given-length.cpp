class Solution {
public:
bool check(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return true;
    }
    return false;
}
    int maxVowels(string s, int k) {
        int n=s.size();
        int count=0;
       for(int i=0;i<k;i++){

        if(check(s[i])){
            count++;
        }
       }
int  maxi=count;
       
       for(int i=k;i<s.size();i++ ){
       if(check(s[i-k])){
        count--;
        
    
       } if(check(s[i])){
        count++;
       }
       maxi=max(maxi,count);
       }
        return maxi;
    }
};