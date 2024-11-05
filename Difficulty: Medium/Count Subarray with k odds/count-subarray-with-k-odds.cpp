//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int func(vector<int>& nums, int goal){
    int n = nums.size();
    if(goal < 0) return 0;
    int l=0,r=0,count=0,sum=0;
    while(r < n){
        sum += (nums[r]%2);
        while(sum > goal){
            sum -= (nums[l]%2);
            l++;
        }
        count += (r-l+1);
        r++;
    }
    return count;
}
    int countSubarray(int n, vector<int>& nums, int k) {
        // Code here
        return func(nums,k)-func(nums,k-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.countSubarray(n, nums, k) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends