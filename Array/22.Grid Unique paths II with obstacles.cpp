//Time complexity:o(2powern)
//Space complexity:o(n)
Use recursion

//Time complexity:o(n)
//Space complexity:o(n)
Top down DP (Recursion+Memoization)

//Time complexity:o(n)
//Space complexity:o(1)
Bottom Up DP Approach

int uniquePathsWithObstacles(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0){
                if(grid[i][j]==1 || (i>0 &&grid[i-1][j]==0) ||
                  (j>0 && grid[i][j-1]==0)){
                    grid[i][j]=0;
                }
                else grid[i][j]=1;
            }
            else{
                if(grid[i][j]==1) grid[i][j]=0;
                else grid[i][j] = grid[i-1][j]+grid[i][j-1];
            }
        }
    }
    return grid[m-1][n-1];
}
