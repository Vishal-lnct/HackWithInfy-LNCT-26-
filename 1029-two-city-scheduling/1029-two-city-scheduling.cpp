class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
         int ttl = 0;
        vector<int> x;

        for(auto &c : costs){
            ttl += c[0];
           x.push_back(c[1] - c[0]);
        }

        sort(x.begin(), x.end());

        for(int i = 0; i < costs.size()/2; i++){
            ttl += x[i];
        }

        return ttl;
    }
};