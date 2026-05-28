class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxi=0;
        int i=0;
        int j=height.size()-1;

        while(i<=j){

            int x=abs(j-i);
            int p=min(height[i],height[j]);

            int area=x*p;
            maxi=max(area,maxi);

            if(height[i]>=height[j]){
                j--;
            }else{
                i++;
            }
        }
        return maxi;
    }
};