//Time complexity:o(2powern)
//Space complexity:o(n) =>recursion takes stack space

int solve(int m,int n,int i,int j){
    if(i<0 || j<0 || i>=m || j>=n) return 0;  
    if(i==m-1 || j==n-1) return 1;
    return solve(m,n,i+1,j) + solve(m,n,i,j+1);
} 
int uniquePaths(int m, int n) {
    return solve(m,n,0,0);
}

//Time complexity:o(n)
//Space complexity:o(n)
Top down DP (Recursion+Memoization)

int solve(vector<vector<int>> &grid,int m,int n,int i,int j){
    if(i<0 || j<0 || i>=m || j>=n) return 0;  
    if(i==m-1 || j==n-1) return 1;
    if(grid[i][j]!=-1) return grid[i][j];
    grid[i][j] = solve(grid,m,n,i+1,j) + solve(grid,m,n,i,j+1);
    return grid[i][j];
} 
int uniquePaths(int m, int n) {
    vector<vector<int>> grid (m,vector<int> (n,-1));
    return solve(grid,m,n,0,0);
}


//Time complexity:o(mn)
//Space complexity:o(mn)
Bottom Up DP Approach
int uniquePaths(int m, int n) {
    int matrix[m][n];
    for(int i=0;i<n;i++){
        matrix[0][i]=1;
    }
    for(int i=0;i<m;i++){
        matrix[i][0]=1;
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            matrix[i][j]=matrix[i][j-1]+matrix[i-1][j];
        }
    }
    return matrix[m-1][n-1];
}

//Time complexity:o(mn)
//Space complexity:o(2n) => o(n)
We are using previous row and current row to calculate so we can use only that

int uniquePaths(int m, int n) {
    vector<int> pre(n,1),curr(n,1);
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            curr[j]=pre[j]+curr[j-1];
        }
        swap(pre,curr);
    }
    return pre[n-1];
}

//Time complexity:o(mn)
//Space complexity: o(n)
In above approach if you carefully watch current and previous row will be same so just add the j-1 element with j

int uniquePaths(int m, int n) {
    vector<int> curr(n,1);
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            curr[j]+=curr[j-1];
        }
    }
    return curr[n-1];
}

//Time complexity:o(m)
//Space complexity: o(1)
combinations

int uniquePaths(int m, int n) {
    int N=m+n-2;
    int r=m-1;
    double res=1;
    for(int i=1;i<=r;i++){
        res=res*(N-r+i)/i;
    }
    return (int)res;
}
