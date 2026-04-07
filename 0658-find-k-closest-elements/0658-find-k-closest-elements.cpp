class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

      vector<pair<int,int>>ans;
      for(int i=0;i<arr.size();i++){
        int p=abs(arr[i]-x);

        ans.push_back({p,i});
      }
      sort(ans.begin(),ans.end());
      vector<int>res;
      for(int i=0;i<k;i++){
     int q =ans[i].second;
     res.push_back(arr[q]);

      }
      sort(res.begin(),res.end());
return res;
        
    }
};