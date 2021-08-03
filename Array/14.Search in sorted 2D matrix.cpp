//Time complexity: o(mn) -> Linear Search

//Time complexity: o(mlogn) 
Apply binary search for every row in matrix;

//Time complexity: o(log mn)
// To find the corresponding row and column in matrix of the midpoint=> matrix[mid/n][mid%n]

 bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m=matrix.size();
    int n=matrix[0].size();
    int low=0,high=m*n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        int ele = matrix[mid/n][mid%n];
        if(ele==target){
        	
            return true;
        }
        if(target<ele){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;
}



