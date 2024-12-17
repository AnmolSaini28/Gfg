//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
bool isPossible(int n, int k, vector<int> &stalls, int ans){
        int cowCount = 1;
        int lastPos = stalls[0];
        for(int i=0 ; i<n ; i++){
            if(stalls[i]-lastPos >= ans){
                cowCount++;
                lastPos = stalls[i];
            }
        }
        return (cowCount >= k);
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        int n = stalls.size();
        sort(stalls.begin(),stalls.end());
        int low = 0;
        int high = stalls[n-1]-stalls[0];
        int ans = -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(isPossible(n,k,stalls,mid)){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends