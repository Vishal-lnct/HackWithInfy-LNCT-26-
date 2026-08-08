class Solution {
public:
int check1(vector<int>&nums,int i,vector<int>&dp1){
int n=nums.size()-2;

    if(i>n){
        return 0;
    }
if(dp1[i]!=-1){
    return dp1[i];
}
    int a=nums[i]+check1(nums,i+2,dp1);
    int b=check1(nums,i+1,dp1);

    return  dp1[i]=max(a,b);
}

int check2(vector<int>&nums,int i,vector<int>&dp2){
int n=nums.size();

    if(i>=n){
        return 0;
    }
if(dp2[i]!=-1){
    return dp2[i];
}
    int a=nums[i]+check2(nums,i+2,dp2);
    int b=check2(nums,i+1,dp2);

    return  dp2[i]=max(a,b);
}

    int rob(vector<int>& nums) {

int n=nums.size();
if (n == 1) return nums[0];
vector<int>dp1(n,-1);
vector<int>dp2(n,-1);
        int p=check1(nums,0,dp1);
        int q=check2(nums,1,dp2);

        return max(p,q);
        
    }
};