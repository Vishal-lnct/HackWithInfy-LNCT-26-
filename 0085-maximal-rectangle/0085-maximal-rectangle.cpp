class Solution {
public:


vector<int>solve1(vector<int>ans){
    int n=ans.size();
vector<int>res(n,-1);
    stack<int>st;
    for(int i=0;i<ans.size();i++){
        while(!st.empty() && ans[st.top()]>=ans[i]){
            st.pop();
        }
    if(!st.empty()){
        res[i]=(st.top());
    }
    st.push(i);
    }
    return res;
}



vector<int>solve2(vector<int>ans){
    int n=ans.size();
vector<int>res(n,n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && ans[st.top()]>=ans[i]){
            st.pop();
        }

    if(!st.empty()){
        res[i]=(st.top());
    }
    st.push(i);
    }
    return res;
}

int largest(vector<int>heights){
    vector<int>left=solve1(heights);
    vector<int>right=solve2(heights);

int maxi=INT_MIN;
    for(int i=0;i<heights.size();i++){
        int width=right[i]-left[i]-1;
        int area=width*heights[i];
        maxi=max(maxi,area);
    }
    return maxi;

}


    int maximalRectangle(vector<vector<char>>& matrix) {
        int mxi=INT_MIN;
        int row=matrix.size();
        int col=matrix[0].size();
        if(matrix.empty()){
            return 0;
        }
        vector<int>heights(col,0);

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]=='1'){
                    heights[j]=heights[j]+1;
                }else{
                    heights[j]=0;
                }
            }
            int area=largest(heights);
            mxi=max(area,mxi);

        }
return mxi;
    }
};