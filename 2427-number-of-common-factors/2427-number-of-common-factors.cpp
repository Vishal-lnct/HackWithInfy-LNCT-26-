class Solution {
public:
    int commonFactors(int a, int b) {
        
        vector<int>x1;
        for(int i=1;i<=a;i++){
            if(a%i==0){
                x1.push_back(i);
            }
        }
        set<int>x2;
        for(int i=1;i<=b;i++){
            if(b%i==0){
                x2.insert(i);
            }

        }

        int count=0;

        for(int i=0;i<x1.size();i++){
            if(x2.find(x1[i])!=x2.end()){
                count++;
            }
        }
return count;
    }
};