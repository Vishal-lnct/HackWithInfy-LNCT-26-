class Solution {
public:
vector<vector<int>>ans;
void check(int i,int j,vector<int>nums,int target){


    while(i<j){

vector<int>res;
        if(nums[i]+nums[j]<target){
            i++;
        }else if(nums[i]+nums[j]>target){
            j--;
        }else{

            while(i<j&&nums[i]==nums[i+1]){
                i++;
            }
            while(i<j &&nums[j]==nums[j-1]){
                j--;
            }
         vector<int>res={-target,nums[i],nums[j]};
         ans.push_back(res);
            i++;
            j--;

        }
        // ans.push_back(res);
    }
}
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3){
            return {};
        }
        int  n=nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){

            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            int n1=nums[i];
            int target=-n1;

            check(i+1,n-1,nums,target);
        }


   return ans;     
    }
};