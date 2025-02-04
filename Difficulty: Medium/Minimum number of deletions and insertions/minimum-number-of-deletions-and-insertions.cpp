//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
  int LCS(string s1 , string s2){
    int n = s1.length();
    int m = s2.length();
    if(n == 0 || m == 0) return 0;
    vector <vector <int>> dp(n + 1 , vector <int> (m+1, 0));

    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=m ; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else {
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }

    return dp[n][m];
}
    int minOperations(string &s1, string &s2) {
        int lcs = LCS(s1 , s2);
        int n = s1.length();
        int m = s2.length();
        return (n-lcs) + (m-lcs);
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        Solution ob;
        cout << ob.minOperations(s1, s2) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends