class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        

        vector<pair<int,int>>ans;
        

    int n=intervals.size();
    if(n==0){
        return 0;
    }
    for(int i=0;i<n;i++){

        ans.push_back({intervals[i][1],intervals[i][0]});
    }
sort(ans.begin(),ans.end());
    int count=1;

    int lst=ans[0].first;

  
    for(int i=1;i<ans.size();i++){
        if(ans[i].second>=lst){
            count++;
        lst=ans[i].first;
        }
    }

    return n-count;
    
       
    }
};