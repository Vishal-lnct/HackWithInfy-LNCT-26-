class Solution {
public:
bool check(int n){
    if(n <= 1) return false;

    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
    int diagonalPrime(vector<vector<int>>& nums) {
        int maxi=0;
        int row=nums.size();
        int col=nums[0].size();

        for(int i=0;i<row;i++){
            
                
                    int  x=nums[i][i];
                    if(check(x)){
                        maxi=max(maxi,x);
                    
                
                    }
                 int y = nums[i][row - i - 1];
            if(check(y)) {
                maxi = max(maxi, y);
            }
        

            }
        
        return maxi;
    }
};