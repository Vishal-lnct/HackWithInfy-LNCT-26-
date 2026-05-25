class Solution {
public:
    bool isPalindrome(int x) {

        int ans=0;
        int rem;

        int n= x;

        while(n!=0){
            rem=n%10;
              if(ans>=INT_MAX/10 || ans<=INT_MIN/10){
                return 0;
            }
            ans=ans*10+rem;
          
            n=n/10;
        }
        if(x<0){
            ans=-ans;
        }
        if (ans==x){
            return true;
        }
        return false;
        
    }
};