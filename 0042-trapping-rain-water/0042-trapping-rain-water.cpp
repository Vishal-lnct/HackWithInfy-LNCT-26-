class Solution {
public:
    int trap(vector<int>& height) {

        int n=height.size();

        int left=0;
        int right=n-1;

        int maxil=0;
        int maxir=0;
        int ans=0;

        while(left<right){

            maxil=max(maxil,height[left]);
            maxir=max(maxir,height[right]);

            if(maxil<maxir){
                ans+=maxil-height[left];
                left++;
            }else{
                ans+=maxir-height[right];
                right--;
            }



        }
        return ans;
    }
};