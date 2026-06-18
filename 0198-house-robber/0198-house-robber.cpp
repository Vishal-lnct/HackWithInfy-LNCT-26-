class Solution {
public:
int t[100];
int check( vector<int>nums,int i,int n){

    if(i>n){
        return 0;
    }

    if(t[i]!=-1){
        return t[i];
    }
    int take=nums[i]+check(nums,i+2,n);
    int nottake=check(nums,i+1,n);

    return t[i]=max(take,nottake);
    


}
    int rob(vector<int>& nums) {

        int n=nums.size()-1;

        memset(t,-1,sizeof(t));
       return  check(nums,0,n);
        
    }
};