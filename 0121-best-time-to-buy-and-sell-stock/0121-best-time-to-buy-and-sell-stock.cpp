class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=prices.size()-1;
        int maxi=0;
        int ans=0;
        while(i>=0){
            if(prices[i]>maxi){
                maxi=prices[i];
            }else{
                ans=max(ans,maxi-prices[i]);
            }

i--;
        }
return ans;
        
    }
};