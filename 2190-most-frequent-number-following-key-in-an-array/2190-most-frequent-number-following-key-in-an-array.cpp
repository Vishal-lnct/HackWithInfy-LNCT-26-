class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {

        unordered_map<int ,int>ans;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key){
                ans[nums[i+1]]++;
            }
        }
        int  maxi=0;
        int p=0;
        for(auto &x:ans){
            if(x.second>maxi){
                maxi=x.second;
                p=x.first;
            }
        }
        return p;

        
    }
};