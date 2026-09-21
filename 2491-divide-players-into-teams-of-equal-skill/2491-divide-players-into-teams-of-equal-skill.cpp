class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long sum=0;

        for(int i=0;i<skill.size();i++){
            sum+=skill[i];
        }
        int n=skill.size();
       if(sum % (n / 2) != 0)
    return -1;
int p=n/2;
        int target=sum/p;

        long long res=0;

        unordered_map<int,int>ans;
int pair=0;
        for(int i=0;i<n;i++){
            if (ans.find(target - skill[i]) != ans.end() &&
    ans[target - skill[i]] > 0) {

                res += 1LL * skill[i] * (target - skill[i]);
                pair++;

                ans[target-skill[i]]--;
            }else{

ans[skill[i]]++;
            }

        }

        if(pair!=n/2){
            return -1;
        }
return res;

        
    }
};