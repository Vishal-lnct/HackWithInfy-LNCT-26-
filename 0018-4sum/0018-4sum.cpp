class Solution {
public:

vector<vector<int>>ans;
void check(int i,int j,vector<int>&nums,long long p,int a,int b){

    while(i<j){


        if(nums[i]+nums[j]<p){
            i++;
        }else if(nums[i]+nums[j]>p){
            j--;
        }else{

            while(i<j && nums[i]==nums[i+1]){
                i++;
            }
            while(i<j&& nums[j]==nums[j-1]){
                j--;
            }
            vector<int>res={a,b,nums[i],nums[j]};
            ans.push_back(res);
            i++;
            j--;
        }
    }
}
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4){
            return {};
        }
sort(nums.begin(),nums.end());
int n=nums.size();
for(int i=0;i<nums.size();i++){
    if(i>0 && nums[i]==nums[i-1]){
        continue;
    }
    for(int j=i+1;j<nums.size();j++){
        if(j>i+1&& nums[j]==nums[j-1]){
            continue;
        }
        int a=nums[i];
        int b=nums[j];

        long long x =(long long)nums[i]+nums[j];
        long long  p=target-x;

        check(j+1,n-1,nums,p,a,b);
    }
}
return ans;
    }
};