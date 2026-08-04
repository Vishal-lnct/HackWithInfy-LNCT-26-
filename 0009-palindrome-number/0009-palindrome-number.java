class Solution {
    public boolean isPalindrome(int x) {
  if (x < 0) {
            return false;
        }
        int  p=x;
int rem;
int ans=0;
       while(x>0){
         rem=x%10;
        ans=ans*10+rem;
        x=x/10;
       }
       if(p==ans){
        return true;
       }
        return false;
    }
}