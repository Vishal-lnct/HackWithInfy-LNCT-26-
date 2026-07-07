class Solution {
public:
    int totalFruit(vector<int>& s) {

        unordered_map<int ,int>ans;

       int maxi=0;
       int left=0;
       for(int right=0;right<s.size();right++){


        ans[s[right]]++;
        while( ans.size()>2){

            ans[s[left]]--;
            if(ans[s[left]] == 0)
                    ans.erase(s[left]);

                left++;
         
        }
           maxi=max(maxi,right-left+1);
       }
       
       return maxi; 
        
    }
};