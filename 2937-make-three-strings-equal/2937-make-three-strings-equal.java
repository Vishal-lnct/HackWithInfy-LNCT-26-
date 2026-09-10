class Solution {
    public int findMinimumOperations(String s1, String s2, String s3) {



int a=s1.length();
int b=s2.length();
int c=s3.length();
int i=0;
int  count=0;
   while (i < a && i < b && i < c &&
               s1.charAt(i) == s2.charAt(i) &&
               s2.charAt(i) == s3.charAt(i)) {

            i++;
        }

    if(i==0){
        return -1;
    }


count+=a-i+b-i+c-i;
return count;
        
    }
}