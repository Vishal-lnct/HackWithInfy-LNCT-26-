class Solution {
public:

vector<vector<int>>ans;

void check( int i,vector<int>& nums,vector<int>&x){
    int n=nums.size();

    if(i==n){
        ans.push_back(x);
        return;
    }
    if(i>n){
        return;
    }



x.push_back(nums[i]); 
check(i+1,nums,x);

x.pop_back();
check(i+1,nums,x);


}


    vector<vector<int>> subsets(vector<int>& nums) {
vector<int>x;
        check(0,nums,x);
        return ans;
        
    }
};