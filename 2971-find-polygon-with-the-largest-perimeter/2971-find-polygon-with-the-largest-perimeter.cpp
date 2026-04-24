class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        long  long  maxi=-1;
long  long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(i>=2 && sum>2*nums[i]){
                maxi=max(maxi,sum);
            }



        }

      return maxi; 
    }
};