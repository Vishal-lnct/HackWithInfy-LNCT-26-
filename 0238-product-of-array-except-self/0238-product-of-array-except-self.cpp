class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n);
        vector<int>right(n);
        int x=1;
        for(int i=0;i<n;i++){
            left[i]=x;
            x=x*nums[i];
        }

        int y=1;
        for(int i=n-1;i>=0;i--){
            right[i]=y;
            y*=nums[i];
        }

        vector<int>ans;
        for(int i=0;i<n;i++){
            int p=left[i]*right[i];
            ans.push_back(p);
        }
        return ans;
    }
};