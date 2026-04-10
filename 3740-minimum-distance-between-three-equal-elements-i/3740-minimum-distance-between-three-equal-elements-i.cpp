class Solution {
public:
    int minimumDistance(vector<int>& nums) {
         int mini = INT_MAX;

        int n = nums.size();

        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {

                for (int k = j + 1; k < n; k++) {
                 if (nums[i] == nums[j] && nums[j] == nums[k]) {
                      int s = abs(i - j) + abs(j - k) + abs(i - k);
                        mini = min(mini, s);
                    }
                }
            }
        }

        if(mini==INT_MAX){
            return -1;
        }
        return mini;
    }
};