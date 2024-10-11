//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Data{
    public:
      int start;
      int end;
  };

class Solution {
  public:
  
  static bool mycmp(Data& arr1, Data& arr2){
      if(arr1.end < arr2.end){
          return true;
      }
      return false;
  }
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        Data arr[n];
        for(int i=0 ; i<n ; i++){
            arr[i].start = start[i];
            arr[i].end = end[i];
        }
        sort(arr,arr+n,mycmp);
        int cnt = 1;
        int endTime = arr[0].end;
        for(int i=1 ; i<n ; i++){
            if(arr[i].start > endTime){
                cnt++;
                endTime = arr[i].end;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends