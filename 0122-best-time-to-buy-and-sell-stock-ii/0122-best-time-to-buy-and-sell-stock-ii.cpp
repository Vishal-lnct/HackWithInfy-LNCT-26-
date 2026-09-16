class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int x=prices[0];
        int sum=0;

        for(int i=0;i<prices.size();i++){

            if(prices[i]>x){
                sum+=prices[i]-x;
                x=prices[i];
               

            }else{
                x=prices[i];
            }
        }
        return sum;
    }
};