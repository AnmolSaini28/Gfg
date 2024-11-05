//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l=0, r=0, len=0, zeroes=0;
        while(r < n){
            if(nums[r] == 0) zeroes++;
            while(zeroes > k){
                if(nums[l] == 0) zeroes--;
                l++;
            }
            len = max(len,r-l+1);
            r++;
        }
        return len;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int m;
        cin >> m;
        cin.ignore();

        Solution obj;
        int ans = obj.maxOnes(arr, m);
        cout << ans << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends