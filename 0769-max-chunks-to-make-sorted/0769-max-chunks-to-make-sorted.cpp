class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int x=0;

        int maxi=0;

        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }

            if(maxi==i){
                x++;
            }
        }
        return x;
    }
};