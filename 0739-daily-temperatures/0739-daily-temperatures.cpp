class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();

        vector<int>ans(n,0);
        stack<int>st;

        for(int i=n-1;i>=0;i--){
    while(!st.empty() && temp[i]>=temp[st.top()]){
        st.pop();
    }
    if(!st.empty()){
        ans[i]=st.top();
    }
    st.push(i);

        }

vector<int>res(n);
for(int i=0;i<ans.size();i++){
if(ans[i]==0){
    res[i]=0;
}else{
    res[i]=ans[i]-i;
}
}
  return res;      
    }
};