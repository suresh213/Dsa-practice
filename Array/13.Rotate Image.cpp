//Time complexity:o(n)

void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();
    //transposing matrix
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //reversing every row
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

//Time complexity:o(n)
//rotate by layers

void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();
    for(int layer=0;layer<n/2;layer++){
        int start=layer;
        int end=n-layer-1;
        for(int i=start;i<end;i++){
            int temp=matrix[i][start];
            matrix[i][start]=matrix[end][i];
            matrix[end][i]=matrix[n-i-1][end];
            matrix[n-i-1][end]=matrix[start][n-i-1];
            matrix[start][n-i-1]=temp;
        }
    }
}
