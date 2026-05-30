class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0;
        int tank=0;

        int total1=0;
        int total2=0;
        for(int i=0;i<gas.size();i++){
            total1+=gas[i];
            total2+=cost[i];
        }
        if(total1<total2){
            return -1;
        }
        

        for(int i=0;i<gas.size();i++){

            int x=gas[i]-cost[i];
            tank+=x;
            if(tank<0){
                start=i+1;
                tank=0;
            }
            
        }
        return start;
    }
};