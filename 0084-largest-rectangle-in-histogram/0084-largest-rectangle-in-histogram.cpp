class Solution {
public:
vector<int>solve1(vector<int>& heights){
    int n=heights.size();

    vector<int>ans(n,-1);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && heights[st.top()]>=heights[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=st.top();
        }
        st.push(i);

    }
    return ans;
}

vector<int>solve2(vector<int>& heights){
    int n=heights.size();

    vector<int>ans(n,n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && heights[st.top()]>=heights[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=st.top();
        }
        st.push(i);

    }
    return ans;
}


    int largestRectangleArea(vector<int>& heights) {
int maxi=INT_MIN;
        vector<int>left=solve1(heights);
        vector<int>right=solve2(heights);

        for(int i=0;i<heights.size();i++){
            int l=left[i];
            int r=right[i];
            int d=r-l-1;
            int area=d*heights[i];

            maxi=max(maxi,area);
        }



return maxi;
        
    }
};