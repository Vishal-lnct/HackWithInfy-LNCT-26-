class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {


        int start=1;
        int end=*max_element(piles.begin(),piles.end());

        while(start<=end){
            

            int mid=start+(end-start)/2;

            long long hrs=0;
            for(int x:piles){
                hrs+=(x+mid-1)/mid;

            }
            if(hrs<=h){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        
       return start; 
    }
};