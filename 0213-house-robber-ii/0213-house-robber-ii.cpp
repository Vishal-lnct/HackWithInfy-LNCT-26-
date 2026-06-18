class Solution {
public:
int t[101];
int check(vector<int>&nums,int i,int j){
    if(i>j){
        return 0;
    }
    if(t[i]!=-1){
        return t[i];
    }
    int take=nums[i]+check(nums,i+2,j);
    int ntake=check(nums,i+1,j);

    return t[i]=max(take,ntake);
}
    int rob(vector<int>& nums) {

        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        int  n=nums.size();
        memset(t,-1,sizeof(t));

        int a=check(nums,0,n-2);

        memset(t,-1,sizeof(t));
        int b=check(nums,1,n-1);

        return max(a,b);
        
    }
};