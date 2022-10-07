// link - https://leetcode.com/problems/unique-paths/
class Solution {
public:
     int f(vector<vector<int>>& dp,int x,int y){
         if(x<0 || y<0)
            return 0;
        if(x==0 && y==0)
            return 1;
         if(dp[x][y]!=-1)
            return dp[x][y];
       
        long int up=f(dp,x-1,y);
        long int left=f(dp,x,y-1);
        return dp[x][y]=up+left;
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return f(dp,m-1,n-1);
    }
};
