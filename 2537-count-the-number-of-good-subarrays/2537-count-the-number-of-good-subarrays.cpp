class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n=nums.size();
        
        long long count=0;
        long long pairs=0;
        unordered_map<int,int>ans;

        int left=0;
        for(int right=0;right<n;right++){
           pairs += ans[nums[right]];
            ans[nums[right]]++;

          
            while (pairs >= k) {
                count += (n - right);

                ans[nums[left]]--;
                pairs -= ans[nums[left]];
                left++;
            }
        }
return count;
    }
};