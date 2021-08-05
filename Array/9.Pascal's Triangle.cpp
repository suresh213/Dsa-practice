Types of problems can be asked in pascal triangle

1) Print a number in certain row and column 
ex: 5th row 3rd column

//Time complexity :o(n) -> For calculating NCr
//space complexity:o(1)
formula: NCr -> (5-1)C(3-1)



2) Print 5th row
//Time complexity :o(n2)
//space complexity:o(n)
for every column find number using NCr formula



3) Print rows upto n
//Time complexity :o(n)
//space complexity:o(n)

vector<vector<int>> generate(int n) {
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        vector<int> temp(i+1,1);
        for(int j=1;j<i;j++){
            temp[j] = ans[i-1][j-1]+ans[i-1][j];
        }
        ans.push_back(temp);
    }
    return ans;
}
