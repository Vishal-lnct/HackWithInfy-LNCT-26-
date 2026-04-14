class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int maxi=0;
   
   for(int i=0;i<nums1.size();i++){
       for(int j=0;j<nums2.size();j++){
           int x=0;
           if(nums1[i]==nums2[j]){
            
               while(i+x<nums1.size() && j+x<nums2.size() &&nums1[i+x]==nums2[j+x] ){
                   if(nums1[i+x]==nums2[j+x]){
                       x++;
                   }else{
                    continue;
                   }
               }
               
                
           }
           maxi=max(maxi,x);
          
       }
   }
       return maxi;
        
    }
};