class Solution {
public:
    int characterReplacement(string s, int k) {
        
int left=0;
int x=0;
int maxf=0;
unordered_map<char,int>ans;
// int left=0;
for(int right=0;right<s.size();right++){

ans[s[right]]++;
maxf=max(maxf,ans[s[right]]);

while(right-left-maxf+1>k){
    ans[s[left]]--;
    left++;
}
x=max(x,right-left+1);
}
return x;  
    }
};