/*
Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.

For example, given the following triangle

[
     [2],
    [3,4],
   [6,5,7],
  [4,1,8,3]
]
The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).

*/

class Solution {
    public int minimumTotal(List<List<Integer>> triangle) {
        int n = triangle.get(triangle.size()-1).size();
	int[][] dp = new int[n][n];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++){
			dp[i][j] = Integer.MAX_VALUE;
		}
	}
	dp[0][0] = triangle.get(0).get(0);
	// DP induction rules
	for(int i = 1; i < n; i++){
		for(int j = 0; j < i; j++){
			dp[i][j] = Math.min(dp[i][j], dp[i-1][j] + triangle.get(i).get(j));
			dp[i][j+1] = Math.min(dp[i][j+1], dp[i-1][j] + triangle.get(i).get(j+1));
		}
	}
	// after we calculate mini sum in the last line of triangle
	// we can just loop through the last line and get the minimum sum.
	int res = dp[n-1][0];
	for(int i = 1; i < n; i++){
		res = Math.min(res, dp[n-1][i]);
	}
	return res;
        
    }
}
