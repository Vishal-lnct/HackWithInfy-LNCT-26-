class Solution {
    public int lengthOfLongestSubstring(String s) {

        HashSet<Character>x=new HashSet<>();
      int left=0;
      int maxi=0;
      for(int right=0;right<s.length();right++){
        while(x.contains(s.charAt(right))){
            x.remove(s.charAt(left));
            left++;
        }
        maxi=Math.max(maxi,right-left+1);
        x.add(s.charAt(right));

      }
return maxi;

        
    }
}