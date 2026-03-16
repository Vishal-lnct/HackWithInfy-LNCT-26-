class Solution {
public:
    int scoreOfParentheses(string s) {
        // int count=0;
        // stack<char>st;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='('){
        //         st.push(s[i]);
        //     }else {
        //         if(!st.empty()){
        //         st.pop();
        //         count++;
        //     }
        //     }
        // }
        // return count;

          int count = 0;
        stack<char> st;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }else{
                st.pop();

                if(s[i-1] == '('){   
                    
                    int power = 1;
                    for(int j = 0; j < st.size(); j++){
                        power *= 2;
                    }

                    count += power;
                }
            }
        }
        return count;
    }
};