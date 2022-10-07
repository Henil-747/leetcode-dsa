#include <bits/stdc++.h>

using namespace std;

int decodeWays(string &s, int start, int &n, vector<int> &dp) {
    if (start == n) {
        return 1;
    }
    if (dp[start] != -1) {
        return dp[start];
    }
    
    dp[start] = 0;
    
    //only one char
    if (s[start] == '0') {
        return dp[start];
    } else {
        dp[start] += decodeWays(s, start+1, n, dp);
    }
    
    //two chars
    if (s[start] == '1' || (s[start] == '2' && s[start+1] <= '6')) {
        dp[start] += decodeWays(s, start+2, n, dp);
    }
    
    return dp[start];
}

int numDecodings(string s) {
    int n = s.size();
    vector<int> dp(n, -1);
    dp[n-1] = (s[n-1] == '0') ? 0 : 1;
    decodeWays(s, 0, n, dp);
    return dp[0];
}

int main(void) {
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << "Total possible decodings: " << numDecodings(s) << "\n";
}