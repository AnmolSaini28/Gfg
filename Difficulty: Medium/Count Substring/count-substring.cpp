//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubstring(string s) {
        int lastSeen[3] = {-1,-1,-1};
        int count = 0;
        for(int i=0 ; i<s.size() ; i++){
            lastSeen[s[i]-'a'] = i;
            if((lastSeen[0] != -1 && lastSeen[1] != -1) && (lastSeen[1] != -1 && lastSeen[2] != -1)){
                count += (min(lastSeen[0],min(lastSeen[1],lastSeen[2]))+1);
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        cout << obj.countSubstring(s) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends