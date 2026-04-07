class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int>ans;
//         int sum=0;
//         for(int i=0;i<nums.size();i++){
// sum+=nums[i];
// if(ans.find(target-nums[i])==ans.end()){
//     return {i,ans[target-nums[i]]};
// }
// ans[sum]=i;
//         }
//         return{};



for(int i=0;i<nums.size();i++){
    for(int  j=i+1;j<nums.size();j++){
        if(nums[i]+nums[j]==target){
            return {i,j};
            break;
        }
    }
}
return {};

// vector<int> ans;
// for(int i=0;i<nums.size();i++){
//     for(int j=i+1;j<nums.size();j++){
//         if(nums[i]+nums[j]==target){
//             ans.push_back(i);
//             ans.push_back(j);
//             break;
//         }
//     }
// }
// return ans;
    }
};