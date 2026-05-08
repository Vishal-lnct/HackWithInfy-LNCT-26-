class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();

        vector<long long> ans(n,0);

        unordered_map<long long,long long> x;
        unordered_map<long long,long long> y;

       
        for(int i=0;i<n;i++){

            long long sum=0;

            if(x.find(nums[i])!=x.end()){

                sum += (x[nums[i]] * 1LL * i) - y[nums[i]];
            }

            x[nums[i]]++;
            y[nums[i]] += i;

            ans[i]=sum;
        }

        x.clear();
        y.clear();

     
        for(int i=n-1;i>=0;i--){

            long long sum=0;

            if(x.find(nums[i])!=x.end()){

                sum += y[nums[i]] - (x[nums[i]] * 1LL * i);
            }

            x[nums[i]]++;
            y[nums[i]] += i;

            ans[i]+=sum;
        }

        return ans;
    }
};