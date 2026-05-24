class Solution {
public:

bool check(int  n){
 vector<int>ans;

   int rem;
   while(n>0){
       rem=n%2;
       ans.push_back(rem);
       n=n/2;
       
   }
    set<int>x(ans.begin(),ans.end());{
       if(x.size()==1){
        return true;
       } 
    }
    return false;
//    reverse(ans.begin(),ans.end());

}

    int countMonobit(int n) {
        int count=0;

        for(int i=0;i<=n;i++){

            if(i==0){
                count++;
            }
            if(check(i)){
                count++;
            }
        }
       return count; 
    }
};