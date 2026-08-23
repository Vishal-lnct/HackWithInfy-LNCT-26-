class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi=INT_MIN;
    double sum=0;

        for(int i=0;i<k;i++){
            sum+=nums[i];
        }

        double avg=(double)sum/k;
        maxi=max(maxi,avg);
int left=0;
        for(int right=k;right<nums.size();right++){
            sum-=nums[left];
            left++;
            sum+=nums[right];
               avg=(double)sum/k;
               maxi=max(maxi,avg);
        }


      return maxi;  
    }
};