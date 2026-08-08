class Solution {
public:
int t[201][100000];
bool check(int i,vector<int>&nums,int target){
int n=nums.size();
    if(target==0){
        return true;
    }
    if(i>=n){
        return false;
    }
    if(t[i][target]!=-1){
        return t[i][target];
    }
    int take=false;
    if(target>=nums[i]){
    take=check(i+1,nums,target-nums[i]);
    }

    int ntake=check(i+1,nums,target);

    return  t[i][target]=take || ntake;

}
    bool canPartition(vector<int>& nums) {
int n=nums.size();
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
       memset(t,-1,sizeof(t));
return check(0,nums,target);

        
    }
};