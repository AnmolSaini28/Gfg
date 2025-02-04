//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
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
    int countMin(string s){
    //complete the function here
        string t = s;
        reverse(s.begin(), s.end());
        int x = LCS(s,t);
        int n = s.length();
        return (n-x);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    
cout << "~" << "\n";
}
return 0;
}


// } Driver Code Ends