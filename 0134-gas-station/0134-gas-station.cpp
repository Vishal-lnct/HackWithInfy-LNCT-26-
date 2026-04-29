class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int x=0;
        int y=0;
        int p=0;
        int start=0;
        for(int i=start;i<gas.size();i++){
            x+=gas[i];
            y+=cost[i];

           p+=gas[i]-cost[i];
           if(p<0){
            start=i+1;
            p=0;
           }
        }
        if(x<y){
            return -1;
        }
        return start;
        
    }
};