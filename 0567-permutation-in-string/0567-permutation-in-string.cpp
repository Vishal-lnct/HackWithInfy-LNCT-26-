class Solution {
public:
    bool checkInclusion(string p, string s) {
           if(p.size()>s.size()){
            return false;
        }
        // vector<int>ans;

        vector<int>x1(26);
        vector<int>x2(26);

        for(int i=0;i<p.size();i++){
            x2[p[i]-'a']++;
        }
        
int k=p.size();

for(int i=0;i<k;i++){

    x1[s[i]-'a']++;
}
if(x1==x2){
    return true;
}
int left=0;
for(int right=k;right<s.size();right++){
x1[s[right]-'a']++;
    x1[s[left]-'a']--;
    left++;
    
    if(x1==x2){
        return true;
    }
}
return false;
    }
};