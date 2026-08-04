class Solution {
public:

int check(int i,int j,vector<int>&nums){


if(i>j){
    return 0;

}
if(i==j){
    return nums[i];
}

int a=nums[i]-check(i+1,j,nums);

int b=nums[j]-check(i,j-1,nums);

return max(a,b);

}
    bool predictTheWinner(vector<int>& nums) {

        int i=0;
        int j=nums.size()-1;
    int p=check(i,j,nums);
    if(p>=0){

        return true;
    }
    return false;
        
    }
};