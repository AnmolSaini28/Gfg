//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int ans = 0;
        for(int i=0 ; i<k ; i++){
            ans += cardPoints[i];
        }
        int curr = ans;
        for(int i=k-1 ; i>=0 ; i--){
            curr = curr-cardPoints[i];
            curr = curr+cardPoints[n-k+i];
            ans = max(ans,curr);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Consume the newline character

    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> cardPoints;
        while (ss >> num)
            cardPoints.push_back(num);

        int k;
        cin >> k;
        cin.ignore(); // Consume the newline character

        Solution ob;
        cout << ob.maxScore(cardPoints, k) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends