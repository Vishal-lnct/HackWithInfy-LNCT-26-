class Solution {
public:

int check(int a,int b){

    int p=__gcd(a,b);
    int lcm=(a*b)/p;

    return lcm;
}
    int subarrayLCM(vector<int>& nums, int k) {

         int count = 0;

        for(int i = 0; i < nums.size(); i++) {

            long long l = 1;

            for(int j = i; j < nums.size(); j++) {

                l = check(l, nums[j]);

                if(l == k) {
                    count++;
                }

                else if(l > k) {
                    break;
                }
            }
        }

        return count;
    }
};