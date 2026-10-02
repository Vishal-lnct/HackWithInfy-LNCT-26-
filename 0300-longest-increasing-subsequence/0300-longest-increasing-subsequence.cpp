class Solution {
public:
int t[2501][2501];
int check(int i,vector<int>& nums,int prev){

    int n=nums.size();
    if(i>=n){
        return 0;
    }
    if(t[i][prev+1]!=-1){
        return t[i][prev+1];
    }
    int a=0;
    int b=0;
    if( prev==-1 ||nums[i] > nums[prev]){
        a= 1+check(i+1,nums,i);
    }
     b= check(i+1,nums,prev);
    return  t[i][prev+1]=max(a,b);

}
    int lengthOfLIS(vector<int>& nums) {
memset(t,-1,sizeof(t));
        return check(0,nums,-1);
        
    }
};