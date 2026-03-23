class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        
        priority_queue<int>a;
        for(int i=0;i<nums.size();i++){
            a.push(nums[i]);
        }

        long long  sum=0;
        while(k--){

         int x=a.top();
         a.pop();
         sum+=x;
         a.push(x+1);
        //  k--;

        }

        return sum;
    }
};