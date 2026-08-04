class Solution {
public:
int t[23][23];
int check(int i,int j,vector<int>&nums){


if(i>j){
    return 0;

}
if(i==j){
    return nums[i];
}
if(t[i][j]!=-1){
    return t[i][j];
}

int a=nums[i]-check(i+1,j,nums);

int b=nums[j]-check(i,j-1,nums);

return t[i][j]= max(a,b);

}
    bool predictTheWinner(vector<int>& nums) {
memset(t,-1,sizeof(t));
        int i=0;
        int j=nums.size()-1;
    int p=check(i,j,nums);
    if(p>=0){

        return true;
    }
    return false;
        
    }
};