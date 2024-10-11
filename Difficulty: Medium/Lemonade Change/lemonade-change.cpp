//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        int five_dollar_note = 0;
        int ten_dollar_note = 0;
        // Base Case
        if(bills[0] == 10 || bills[0] == 20){
            return false;
        }
        int n = bills.size();
        for(int i=0 ; i<n ; i++){
            if(bills[i] == 5) {
                five_dollar_note++;
            }
            else if(bills[i] == 10) ten_dollar_note++;
            if(bills[i] == 5) continue;

            else if(bills[i] == 10) {
                if(five_dollar_note > 0){
                    five_dollar_note--;
                }
                else{
                    return false;
                }
            }

            else if(bills[i] == 20) {
                if(ten_dollar_note > 0 && five_dollar_note > 0){
                    five_dollar_note--;
                    ten_dollar_note--;
                }
                else if(five_dollar_note >= 3){
                    five_dollar_note-=3;
                }
                else{
                    return false;
                }
            }
        }
        
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends