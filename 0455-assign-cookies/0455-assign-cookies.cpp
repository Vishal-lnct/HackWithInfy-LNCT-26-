class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        if(s.size()==0){
            return 0;
        }

        int count=0;
        int i=0;
        int j=0;
        while(i<=g.size()-1 && j<=s.size()-1){

            if(g[i]<=s[j]){
                count++;
                i++;
                j++;
            }else{
                j++;
            }
        }
        return count;
    }
};