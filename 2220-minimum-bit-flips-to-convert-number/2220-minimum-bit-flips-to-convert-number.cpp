class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x=0;
        while(start!=0 || goal!=0){
            if((start &1)!=(goal&1)){
                x++;
            }
            start>>=1;
            goal>>=1;
        }
       return x; 
    }
};