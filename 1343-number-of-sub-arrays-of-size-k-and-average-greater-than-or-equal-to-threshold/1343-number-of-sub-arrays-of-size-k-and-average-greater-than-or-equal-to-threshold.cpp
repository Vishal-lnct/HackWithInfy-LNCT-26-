class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int count=0;
        int sum=0;
        for(int i=0;i<k;i++){
sum+=arr[i];
        }

        if(sum/k>=threshold){
            count++;
        }
        int left=0;
        for(int right=k;right<arr.size();right++){

            sum-=arr[left];
            left++;
            sum+=arr[right];
            if(sum/k>=threshold){
                count++;
            }
            
        }
        return count;
    }
};