class Solution {
    public int firstUniqChar(String s) {

        HashMap<Character,Integer>x=new HashMap<>();
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            x.put(ch,x.getOrDefault(ch,0)+1);
        }

        // for(Map.Entry:<Integer,Integer>p:x.entryset()){
            
        // }
        for(int i=0;i<s.length();i++){
            char p=s.charAt(i);
            if(x.get(p)==1){
                return i;
            }
        }
        return -1;
    }
}