class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        // if(moves.size()==1){
        //     return 1;
        // }
        int count1=0;
        int count2=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                count1++;
            }else if(moves[i]=='R'){
                count2++;
            }
        }
        string x;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='_' && count1>=count2){
                x+='L';
            }else if(moves[i]=='_' && count1<count2){
                x+='R';
            }else{
                x+=moves[i];
            }

        }

        int p=0;
        for(int i=0;i<x.size();i++){
            if(x[i]=='L'){
                p++;
            }else{
                p--;
            }
        }
        return abs(p);
        
    }
};