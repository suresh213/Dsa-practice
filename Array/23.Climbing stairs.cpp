//Time complexity:o(2powern)
//Space complexity:o(n)
Use recursion

//Time complexity:o(n)
//Space complexity:o(n)
Top down DP (Recursion+Memoization)

int find(vector<int> &memo,int n,int i){
    if(i==n) return 1;
    if(i>n) return 0;
    if(memo[i]>0) return memo[i];
    memo[i] = find(memo,n,i+1) + find(memo,n,i+2);
    return memo[i];
}
int climbStairs(int n) {
    vector<int> memo(n,0);
    return find(memo,n,0);
}


//Time complexity:o(n)
//Space complexity:o(n)
int climbStairs(int n) {
    if(n==1) return 1;
    int dp[n+1];
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

//Time complexity:o(n)
Observing this its just a fibonacci number!

int climbStairs(int n) {
    if(n<=1) return n;
    int first=1,second=1,third;
    for(int i=2;i<=n;i++){
        third=first+second;
        first=second;
        second=third;
    }
    return third;
}

