class Solution {
public:
vector<vector<int>>res;
void check(int idx,vector<int>&nums,vector<int>&temp){

    if(temp.size()>=2){
res.push_back(temp);
    }
    set<int>s;
    for(int i=idx;i<nums.size();i++){
        if((temp.empty()||nums[i]>=temp.back())&& s.find(nums[i])==s.end()){
            temp.push_back(nums[i]);
            s.insert(nums[i]);
             check(i+1,nums,temp);
    temp.pop_back();
        }
    }
   



}
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>temp;
        // vector<vector<int>>res;

        check(0,nums,temp);
        return res;


        
    }
};