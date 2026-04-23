class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){

                int x=0;
                int y=0;

                for(int  p=i;p<i+2;p++){
                    for(int q=j;q<j+2;q++){
                        if(grid[p][q]=='B'){
                            x++;
                        }else{
                            y++;

                        }
                    }
                    if(x>2 || y>2){
                        return true;
                    }
                }


            }
        }
        
return false;
    }
};