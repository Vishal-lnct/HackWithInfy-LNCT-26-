class Solution {
public:
    int bestClosingTime(string cust) {
         int count1=0;
        // int count2=0;
        int maxi=0;
        int x=0;

        for(int i=0;i<cust.size();i++){
            if(cust[i]=='Y'){
                count1++;
            }else{
                count1--;
            }
            if(count1>maxi){
                maxi=count1;
x=i+1;
            }
        }
        return x;
        
    }
};