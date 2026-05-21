class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {

        unordered_set<string>x;

        for(int i=0;i<arr1.size();i++){

            string p=to_string(arr1[i]);

            string temp="";

            for(int i=0;i<p.size();i++){
                temp+=p[i];
                x.insert(temp);
            }
        }

        int  maxi=0;
        for(int i=0;i<arr2.size();i++){

            string  q=to_string(arr2[i]);
            string temp="";
            for(int i=0;i<q.size();i++){
                temp+=q[i];
                if(x.find(temp)!=x.end()){
                    int t=temp.size();
                    maxi=max(maxi,t);
                }
            }
        }


return maxi;
        
    }
};