//Time complexity: o(mn) -> Linear Search

//Time complexity: o(mlogn) 
Apply binary search for every row in matrix;

//Time complexity: o(m+n) 
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m=matrix.size();
    int n=matrix[0].size();
    int i=0,j=n-1;
    while(i<m && j>=0){
        if(target==matrix[i][j]){
            return true;
        }
        if(target<matrix[i][j]){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}
