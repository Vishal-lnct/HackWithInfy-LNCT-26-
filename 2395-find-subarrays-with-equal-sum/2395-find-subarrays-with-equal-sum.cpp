class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        
set<int>s;

for(int i=1;i<nums.size();i++){
int p=nums[i]+nums[i-1];
if(s.count(p)){
    return true;
}else{
    s.insert(p);
}

}
return false;
    }
};