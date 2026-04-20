class Solution {
public:
    int maximumUnits(vector<vector<int>>& x, int tsize) {
        sort(x.begin(),x.end(),[](auto &a  ,auto &b){
            return a[1]>b[1];
        });
        int ttl=0;

        for(int i=0;i<x.size();i++){
            int p=min(tsize,x[i][0]);
            ttl+=p*x[i][1];
            tsize-=p;
        }
        return ttl;
    }
};