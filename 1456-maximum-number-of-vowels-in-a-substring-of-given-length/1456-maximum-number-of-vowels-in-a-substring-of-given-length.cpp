class Solution {
public:

bool check(char ch){

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return true;
    }
    return false;
}
    int maxVowels(string s, int k) {


 int count=0;
 int maxi=0;
 for(int i=0;i<k;i++){
    if(check(s[i])){
        count++;
    }
 }
 maxi=max(maxi,count);
 int left=0;
 for(int right=k;right<s.size();right++){

    if(check(s[left])){
        count--;
    }
    left++;
    if(check(s[right])){
        count++;
    }
    maxi=max(maxi,count);
 }

   return maxi;     
    }
};