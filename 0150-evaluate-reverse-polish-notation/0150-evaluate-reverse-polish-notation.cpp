class Solution {
public:
int solve(int a,int b,string ch){
    if(ch=="*"){
        return b*a;
    }
    if(ch=="-"){
        return b-a;
    }
    if(ch=="+"){
        return a+b;
    }
    if(ch=="/"){
        return b/a;
    }


 return 0; 
}
    int evalRPN(vector<string>& tokens) {

        stack<int>st;
        for(int i=0;i<tokens.size();i++){

            if(tokens[i] != "+" &&
   tokens[i] != "-" &&
   tokens[i] != "*" &&
   tokens[i] != "/"){

int p=stoi(tokens[i]);
                st.push(p);
            }else {

int a=st.top();
st.pop();
int b=st.top();
st.pop();

int q=solve(a,b,tokens[i]);
st.push(q);


            }
        }
        return st.top();
    }
};