class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());

        int n=nums.size();

        vector<int>ans;

        for(int i=0;i<n;i++){

            if(s.find(i+1)==s.end()){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};