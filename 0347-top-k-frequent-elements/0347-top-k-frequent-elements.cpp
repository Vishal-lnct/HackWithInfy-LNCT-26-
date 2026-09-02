class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

priority_queue<pair<int,int>,
               vector<pair<int,int>>,
               greater<pair<int,int>>> pq;


               unordered_map<int ,int>ans;
               for(int i=0;i<nums.size();i++){
                ans[nums[i]]++;
               }

               for(auto x:ans){


                int a=x.first;
                int b=x.second;

                pq.push({b,a});

                while(pq.size()>k){
                    pq.pop();
                }
               }
vector<int>x;
while(!pq.empty()){

   
  auto p=pq.top();

    pq.pop();
    x.push_back(p.second);
}
     return x;   
    }
};