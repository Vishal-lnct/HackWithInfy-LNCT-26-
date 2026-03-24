class Solution {
public:
    int minAddToMakeValid(string s) {

         int x = 0;   
        int y = 0; 

        for(int i=0;i<s.size();i++) {
            if(s[i] == '(') {
                x++;
            } else { 
                if(x > 0) {
                    x--; 
                } else {
                    y++; 
                }
            }
        }

        return x + y;
        
    }
};