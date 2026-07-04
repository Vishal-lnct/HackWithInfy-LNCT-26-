class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        if(score.size()==1){
            return {"Gold Medal"};
        }
        if(score.size()==2 && score[0]>score[1]){
            return {"Gold Medal", "Silver Medal"};
        }else if(score.size()==2 && score[0]<score[1]){
             return { "Silver Medal","Gold Medal"};
        }

        vector<int>temp=score;

        sort(score.rbegin(),score.rend());

        unordered_map<int ,string>ans;
        ans[score[0]]="Gold Medal";
        ans[score[1]]="Silver Medal";
        ans[score[2]]="Bronze Medal";
        unordered_map<int,int>t;

        for(int i=0;i<score.size();i++){
            t[score[i]]=i+1;
        }

        vector<string>res;

        for(int i=0;i<temp.size();i++){

            if(ans.find(temp[i])!=ans.end()){
                res.push_back(ans[temp[i]]);
            }else{

              string p=to_string(t[temp[i]]);
              res.push_back(p);
            }
        }
return res;
        
    }
};