class Solution {
public:
    int minimumDistance(vector<int>& nums) {
       unordered_map<int, int> ans1; 
    unordered_map<int, int> ans2; 
    // unordered_map<int, int> ans3; 

    int mini = INT_MAX;

    for (int i = 0; i < nums.size(); i++) {
        if (ans2.find(nums[i]) != ans2.end()) {
            int x = ans1[nums[i]];
            int y = ans2[nums[i]];
            int z = i;
            int p = abs(x - y) + abs(y - z) + abs(z - x);
            mini = min(mini, p);

            ans1[nums[i]]=ans2[nums[i]];
            ans2[nums[i]]=i;
        }

        if (ans1.find(nums[i]) != ans1.end()) {
            ans2[nums[i]] = i; 
        } else {
                ans1[nums[i]] = i;
            }
    }

    if (mini == INT_MAX){  
    return -1;
    }
    else{
       return mini; 
    } 
    }
        
    
};