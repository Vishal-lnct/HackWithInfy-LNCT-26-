class Solution {
public:
    int maxProduct(int n) {
        vector<int>nums;

        while(n>0){

            int x=n%10;
            nums.push_back(x);
            n/=10;
        }

        sort(nums.rbegin(),nums.rend());

        return nums[0]*nums[1];
    }
};