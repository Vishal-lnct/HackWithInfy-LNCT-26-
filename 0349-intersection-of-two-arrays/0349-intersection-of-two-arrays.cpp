class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

       set<int>s1;
       vector<int>res;

       for(int i=0;i<nums1.size();i++){
        s1.insert(nums1[i]);
       }

       set<int>s2;
       for(int i=0;i<nums2.size();i++){
        s2.insert(nums2[i]);
       }
       for(auto & x:s1){
        int p=x;
        if(s2.find(p)!=s2.end()){
            res.push_back(p);
        }
       }
return res;
    }
};