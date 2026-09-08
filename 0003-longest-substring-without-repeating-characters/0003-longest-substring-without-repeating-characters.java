class Solution {
    public int lengthOfLongestSubstring(String s) {

    HashMap<Character,Integer>ans=new HashMap<>();

    int maxi=0;
    int left=0;
    
    for(int right=0;right<s.length();right++){

            char ch = s.charAt(right);

ans.put(ch,ans.getOrDefault(ch,0)+1);

while(ans.get(ch)>1){

char leftchar=s.charAt(left);

ans.put(leftchar, ans.getOrDefault(leftchar, 0) - 1);
left++;

}

maxi=Math.max(maxi,right-left+1);

    }




return maxi;
        
    }
}