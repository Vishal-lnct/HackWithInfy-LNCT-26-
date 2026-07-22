class Solution {
public:
    int findMaxLength(vector<int>& nums) {

       int maxi=0;
unordered_map<int,int>ans;

ans[0]=-1;
int sum=0;
for(int i=0;i<nums.size();i++){
if(nums[i]==0){

    sum--;
}else{
    sum++;
}
cout<<sum<<endl;
if(ans.find(sum)!=ans.end()){

    maxi=max(maxi,i-ans[sum]);
}else{
ans[sum]=i;

}

}
       
 return maxi;       
    }
};