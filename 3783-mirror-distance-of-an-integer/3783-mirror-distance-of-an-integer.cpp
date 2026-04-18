class Solution {
public:
    int mirrorDistance(int n) {

        int  k=n;

        int ans=0;
        int rem;
        while(n>0){
            rem=n%10;
            ans=ans*10+rem;
            n=n=n/10;
        }
return abs(k-ans);
  
        
    }
};