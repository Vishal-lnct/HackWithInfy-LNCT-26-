class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>ans;
int maxf=0;
int maxi=0;
int left=0;
        for(int right=0;right<s.size();right++){

            ans[s[right]]++;
        

        for(auto & x:ans){
            if(x.second>maxf){
                maxf=max(maxf,x.second);
            }
        }
while(right-left+1-maxf>k){
    ans[s[left]]--;
    left++;

}
maxi=max(maxi,right-left+1);
        }
        return maxi;
    }
};