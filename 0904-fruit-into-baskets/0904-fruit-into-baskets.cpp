class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        unordered_map<int,int>ans;
        int  maxi=0;
        // int count=0;

        int left=0;
        for(int i=0;i<fruits.size();i++){

            ans[fruits[i]]++;
            if(ans.size()<=2){
               
                maxi=max(maxi,i-left+1);
            }else{

                     while(ans.size() > 2){

                    ans[fruits[left]]--;

                    if(ans[fruits[left]] == 0){
                        ans.erase(fruits[left]);
                    }

                    left++;
                }

                maxi = max(maxi, i - left + 1);
            }
        }

       return maxi; 
    }
};