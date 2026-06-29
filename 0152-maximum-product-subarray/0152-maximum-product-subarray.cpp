class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxi1=INT_MIN;
        int maxi2=INT_MIN;
        int p=1;
        for(int i=0;i<nums.size();i++){
p*=nums[i];

maxi1=max(maxi1,p);
if(p==0){
    p=1;
}

        }

        int n=nums.size();
int p2=1;
        for(int i=n-1;i>=0;i--){
            p2*=nums[i];

           
            maxi2=max(maxi2,p2);
            if(p2==0){
            p2=1;
           }


        }

        return max(maxi1,maxi2);
        
    }
};