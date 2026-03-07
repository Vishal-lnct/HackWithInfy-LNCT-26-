class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {

        vector<pair<int,int>> ans;

        for(int i = 0; i < profit.size(); i++){
            ans.push_back({difficulty[i], profit[i]});
        }

        sort(ans.begin(), ans.end());
        sort(worker.begin(), worker.end());

        int x = 0;
        int j = 0;
        int best = 0;

        for(int i = 0; i < worker.size(); i++){

            while(j < ans.size() && worker[i] >= ans[j].first){
                best = max(best, ans[j].second);
                j++;
            }

            x += best;
        }

        return x;
    }
};