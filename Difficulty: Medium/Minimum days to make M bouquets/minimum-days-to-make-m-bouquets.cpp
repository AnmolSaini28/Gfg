//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool calculateTotalHours(vector<int> &v, int mid, int m, int k) {
    int n = v.size();
    int count = 0;
    int res = 0;
    for (int i = 0; i < n; i++) {
        if(v[i] <= mid) count++;
        else{
            res += (count/k);
            count = 0;
        }
    }
    res += (count/k);
    return (res>=m);
}
    int solve(int m, int k, vector<int> &v){
      // Code here
      if((long long) v.size() < (long long) m*k) return -1;
        int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < v.size(); i++) {
        maxi = max(maxi, v[i]);
        mini = min(mini, v[i]);
    }
        int low = mini, high = maxi;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (calculateTotalHours(v, mid, m, k)) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends