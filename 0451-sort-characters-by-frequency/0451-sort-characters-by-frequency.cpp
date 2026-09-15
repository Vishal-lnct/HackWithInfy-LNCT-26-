class Solution {
public:
    string frequencySort(string s) {


        unordered_map<char,int>ans;
        for(int i=0;i<s.size();i++){
            ans[s[i]]++;
        }

        vector<pair<int,char>>p;
        for(auto & x:ans){

            int a=x.first;
            int b=x.second;

            p.push_back({b,a});
        }


        sort(p.rbegin(),p.rend());

        string res="";

        for(int i=0;i<p.size();i++){

            int k=p[i].first;
            char ch=p[i].second;

            while(k--){
                res+=ch;
            }
        }
return res;
        
    }
};