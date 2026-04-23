class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {

        unordered_map<int,int>ans1;
        for(int i=0;i<target.size();i++){
            ans1[target[i]]++;
        }
        
        unordered_map<int,int>ans2;
        for(int i=0;i<arr.size();i++){
            ans2[arr[i]]++;
        }

        for(int i=0;i<arr.size();i++){
           if(ans1.find(arr[i])==ans1.end()){
            return false;
           }
           if(ans1[arr[i]]!=ans2[arr[i]]){
            return false;
           }




        }
        
return true;
        
    }
};