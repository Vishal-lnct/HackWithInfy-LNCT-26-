class Solution {
public:
    int trailingZeroes(int n) {
        
        int count=0;

        while(n>=5){
          int p=n/5;
          n=p;
          count+=p;

        }
        return count;
    }
};