class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {

        // set<int>ans(special.begin(),special.end());
        // int maxi=0;
        // int sum=0;
        // for(int i=bottom ;i<=top;i++){
        //     if(ans.find(i)!=ans.end()){
        //         sum=0;
        //     }
        //     else{
        //         sum++;
        //     }
        //     maxi=max(sum,maxi);

        // }
        // return maxi;

        sort(special.begin(),special.end());
        int  n=special.size();
        int maxi=INT_MIN;
        maxi=max(maxi,special[0]-bottom);
      maxi = max(maxi, top - special[n-1]);
         for(int i = 1; i < special.size(); i++) {
            maxi = max(maxi, special[i] - special[i - 1] - 1);
        }
        
return maxi;
    }
};