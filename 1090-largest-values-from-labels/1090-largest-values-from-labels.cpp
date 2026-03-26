class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int num, int useLimit) {
        int n=values.size();

        vector<pair<int,int>>ans;

        for(int i=0;i<n;i++){
            ans.push_back({values[i],labels[i]});
        }

        sort(ans.rbegin(),ans.rend());

         unordered_map<int,int> k; 
        
        int sum = 0;
        int x = 0;
        
        for(auto &p : ans) {
            int val = p.first;

            int label = p.second;

            
            if(k[label] < useLimit) {
                sum += val;
                k[label]++;
                x++;
            }
            
            if(x== num) break;
        }
        
        return sum;
        
    }
};