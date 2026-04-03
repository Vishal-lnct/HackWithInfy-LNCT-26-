class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {

        HashMap<Integer,Integer>x=new HashMap<>();
        Stack<Integer>st=new Stack<>();

        for(int i=0;i<nums2.length;i++){
            while(!st.empty() && nums2[i]>st.peek()){
                x.put(st.peek(),nums2[i]);
                st.pop();
            }
            st.push(nums2[i]);
        }
        while(!st.empty()){
            x.put(st.peek(),-1);
            st.pop();
        }
        int [] result=new int[nums1.length];
        for(int i=0;i<nums1.length;i++){
            result[i]=x.get(nums1[i]);
        }
        return result;
    }
}