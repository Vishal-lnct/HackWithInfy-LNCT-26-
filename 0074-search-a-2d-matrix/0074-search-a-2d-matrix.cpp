class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row=matrix.size();
        int col=matrix[0].size();
        if(row==0 || col==0){
            return false;
        }
        
int start=0;

int  end=row*col-1;
while(start<=end){


    int mid=start+(end-start)/2;
    int r=mid/col;
    int c=mid%col;

    if(matrix[r][c]==target){
        return true;
    }else if(target<matrix[r][c]){
        end=mid-1;
    }else{
        start=mid+1;
    }




}
return false;
        
    }
};