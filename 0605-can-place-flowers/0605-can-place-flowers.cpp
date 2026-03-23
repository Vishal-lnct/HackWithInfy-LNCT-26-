class Solution {
public:
    bool canPlaceFlowers(vector<int>& x, int n) {

       int size = x.size();

        for(int i = 0; i < size; i++){
            if(x[i] == 0){

                int left = 0;
                int right = 0;

                if(i != 0){
                    left = x[i-1];
                }

                if(i != size-1){
                    right = x[i+1];
                }

                if(left == 0 && right == 0){
                    n--;
                    x[i] = 1;   
                    i += 1;     
                }
            }
        }

        if(n <= 0){
            return true;
        }
        return false;
    }
};