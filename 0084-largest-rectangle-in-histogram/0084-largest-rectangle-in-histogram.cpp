class Solution {
public:

void Left(vector<int>&heights,vector<int>&left){

    
    int n=heights.size();

   left.assign(n, -1);
    stack<int>st;

    for(int i=0;i<n;i++){


        while(!st.empty() && heights[st.top()]>=heights[i]){
            st.pop();
        }

        if(!st.empty()){
            left[i]=st.top();
        }
        st.push(i);

    }
}


void Right(vector<int>&heights,vector<int>&right){

    
    int n=heights.size();

   right.assign(n, n);
    stack<int>st;

    for(int i=n-1;i>=0;i--){


        while(!st.empty() && heights[st.top()]>=heights[i]){
            st.pop();
        }

        if(!st.empty()){
            right[i]=st.top();
        }
        st.push(i);

    }
}
    int largestRectangleArea(vector<int>& heights) {

        vector<int>left;
        vector<int>right;
Left(heights,left);

// for(int i=0;i<left.size();i++){
//     cout<<left[i]<<" ";
// }

Right(heights,right);

// for(int i=0;i<right.size();i++){
//     cout<<right[i]<<" ";
// }

int maxi=0;
for(int i=0;i<heights.size();i++){
    // int r=right[i];
    // int l=left[i];

    
    int area = heights[i] * (right[i] - left[i] - 1);
    maxi=max(maxi,area);

}


return maxi;
    return 0;    
    }
};