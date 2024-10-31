//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  static bool mycmp(vector<int>& interval1, vector<int>& interval2){
    return interval1[1] < interval2[1];
}
    int minRemoval(vector<vector<int>> &intervals) {
        // code here
        int n = intervals.size();
        int count = 0;
        sort(intervals.begin(), intervals.end(), mycmp);
        int endTime = intervals[0][1];
        for(int i=1 ; i<n ; i++){
            if(intervals[i][0] >= endTime){
                endTime = intervals[i][1];
            }
            else{
                count++;
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
        int N;
        cin >> N;

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(intervals) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends