class Solution {
    public int longestPalindrome(String s) {

        HashMap<Character,Integer>x=new HashMap<>();
boolean check=false;
        for(int i=0;i<s.length();i++){
            char ch =s.charAt(i);
            x.put(ch,x.getOrDefault(ch,0)+1);

        }
        int sum=0;
       for( Map.Entry<Character,Integer> p:x.entrySet()){
        if((p.getValue())%2==0){
            sum+=p.getValue();
        }else {
            sum+=p.getValue()-1;
            check=true;
        }
       }
       if(check){
          return sum+1;
       }
        return sum;
    }
}