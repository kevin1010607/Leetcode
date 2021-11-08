int numTrees(int n){
    int dp[20];
    dp[0] = dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = 0;
        for(int j = 0; j < i; j++){
            dp[i] += dp[j]*dp[i-1-j];
        }
    }
    return dp[n];
}