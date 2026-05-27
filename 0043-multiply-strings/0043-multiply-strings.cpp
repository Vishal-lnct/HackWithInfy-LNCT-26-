class Solution {
public:
    string multiply(string num1, string num2) {
int m=num1.size();
int n=num2.size();

if(num1[0]=='0' ||num2[0]=='0'){
    return "0";
}

vector<int>ans(m+n,0);

for(int i=m-1;i>=0;i--){

    for(int j=n-1;j>=0;j--){

        int a =num1[i]-'0';
        int b=num2[j]-'0';

        int p=a*b;
        int lst=i+j+1;
        int secl=i+j;
        int sum=p+ans[lst];

        ans[lst]=sum%10;
        ans[secl]=ans[secl]+sum/10;


    }
}

string x;
int i=0;
while( i<ans.size() && ans[i]==0){

    i++;
}
for(int j=i;j<ans.size();j++){
    x+=ans[j]+'0';
}
   return x;   
    }
};