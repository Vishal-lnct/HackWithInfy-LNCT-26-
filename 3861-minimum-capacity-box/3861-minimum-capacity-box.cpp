class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        
       int x = -1;
        
        for(int i = 0; i < capacity.size(); i++){
            if(capacity[i] >= itemSize){
                if(x == -1 || capacity[i] < capacity[x]){
                    x = i;
                }
            }
        }
        
        return x;
    }
};