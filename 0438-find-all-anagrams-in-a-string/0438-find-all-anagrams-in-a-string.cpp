class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int>a(26);
        vector<int>b(26);
vector<int>ans;
        int k =p.size();
        if(s.size()<k){
            return ans;
        }

        for(int i=0;i<k;i++){
            a[p[i]-'a']++;
        }

        for(int i=0;i<k;i++){
            b[s[i]-'a']++;
        }

if(a==b){
    ans.push_back(0);
}
int left=0;
for(int right=k;right<s.size();right++){

    b[s[left]-'a']--;
    b[s[right]-'a']++;
    left++;

    if(a==b){
    ans.push_back(left);
}
}

return ans;
    }
};