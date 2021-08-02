//Time complexity: o(n3)
iterate through matrix and if element is zero make the entire row and column zero

//Time complexity: o(n2)
//Space complexity: o(n)

void setZeroes(vector<vector<int>>& matrix) {
    int m=matrix.size();
    int n=matrix[0].size();
    vector<int> rowZeros(m);
    vector<int> colZeros(n);
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                rowZeros[i]=1;
                colZeros[j]=1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(rowZeros[i] || colZeros[j]){
                matrix[i][j]=0;
            }
        }
    }
}

//Time complexity: o(n2)

Approach:
We are using extra space in above approach. We can avoid space and mark the row and column in matrix itself.
Using first column and row


void setZeroes(vector<vector<int>>& matrix) {
    int m=matrix.size();
    int n=matrix[0].size();
    int col0 = 0;
    for(int i=0;i<m;i++){
        if(matrix[i][0]==0) col0=1;
        for(int j=1;j<n;j++){
            if(matrix[i][j]==0){
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
    }
    
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>0;j--){
            if(matrix[0][j]==0 || matrix[i][0]==0){
                matrix[i][j]=0;
            }
        }
        if(col0) matrix[i][0]=0;
    }
}


