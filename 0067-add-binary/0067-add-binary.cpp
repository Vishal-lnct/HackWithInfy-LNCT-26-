class Solution {
public:
    string addBinary(string a, string b) {

               int m = a.size() - 1;
        int n = b.size() - 1;

        int carry = 0;
        string ans = "";

        while (m >= 0 || n >= 0) {

            char x = '0';
            char y = '0';

            if (m >= 0) {
                x = a[m];
                m--;
            }

            if (n >= 0) {
                y = b[n];
                n--;
            }

          
            if (x == '0' && y == '0' && carry == 0) {
                ans += '0';
                carry = 0;
            }

          
            else if (x == '0' && y == '1' && carry == 0) {
                ans += '1';
                carry = 0;
            }

          
            else if (x == '1' && y == '0' && carry == 0) {
                ans += '1';
                carry = 0;
            }

        
            else if (x == '1' && y == '1' && carry == 0) {
                ans += '0';
                carry = 1;
            }

         
            else if (x == '0' && y == '0' && carry == 1) {
                ans += '1';
                carry = 0;
            }

           
            else if (x == '0' && y == '1' && carry == 1) {
                ans += '0';
                carry = 1;
            }

          
            else if (x == '1' && y == '0' && carry == 1) {
                ans += '0';
                carry = 1;
            }

         
            else if (x == '1' && y == '1' && carry == 1) {
                ans += '1';
                carry = 1;
            }
        }

        if (carry == 1) {
            ans += '1';
        }

        reverse(ans.begin(), ans.end());

        return ans;
        
    }
};