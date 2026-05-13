class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
vector<int>ans(n);
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
if(x>9){

    int sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    ans[i]=sum;
}else{
    ans[i]=x;
}      
        }

        int mini=INT_MAX;
        for(int i=0;i<ans.size();i++){
            if(ans[i]<mini){
                mini=ans[i];
            }
        }
      return mini;  
    }
};