class Solution {
public:

int check(int i,int j,vector<int>&piles){

    if(i>j){
        return 0;
    }

    if(i=j){
        return piles[j];
    }


    int a =piles[i]-check(i+1,j,piles);
    int  b=piles[j]-check(i,j-1,piles);

    return max(a,b);


}
    bool stoneGame(vector<int>& piles) {
        int i=0;
        int j=piles.size()-1;
        int p=check(i,j,piles);

        if(p>=0){
            return true;
        }
        return false;
    }
};