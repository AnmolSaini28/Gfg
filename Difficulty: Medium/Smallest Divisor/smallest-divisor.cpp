//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int getMax(vector<int>& nums){
        int n = nums.size();
        int maxi = -1;
        for(int i=0 ; i<n ; i++){
            maxi = max(maxi,nums[i]);
        }
        return maxi;
    }
    int calculateTotal(vector<int> &v, int threshold) {
    int total = 0;
    int n = v.size();
    for (int i = 0; i < n; i++) {
        total += ceil((double)(v[i]) / (double)(threshold));
    }
    return total;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = getMax(nums);
        while (low <= high) {
        int mid = (low + high) / 2;
        int total = calculateTotal(nums, mid);
        if (total <= threshold) {
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
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends