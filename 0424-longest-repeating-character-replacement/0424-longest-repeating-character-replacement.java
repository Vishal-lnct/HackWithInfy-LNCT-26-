class Solution {
    public int characterReplacement(String s, int k) {
 HashMap<Character,Integer>ans=new HashMap<>();
int maxf=0;
int maxi=0;
int left=0;
        for(int right=0;right<s.length();right++){

            char ch=s.charAt(right);
            ans.put(ch,ans.getOrDefault(ch,0)+1);
        
for (Map.Entry<Character, Integer> e : ans.entrySet()) {

   
    int value = e.getValue();
    maxf=Math.max(maxf,value);

    
}
while(right-left+1-maxf>k){
   char leftChar = s.charAt(left);
ans.put(leftChar, ans.get(leftChar) - 1);
    left++;

}
maxi=Math.max(maxi,right-left+1);
        }
        return maxi;
      
    }
}