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
        sum += nums[r];
        while(sum > goal){
            sum -= nums[l];
            l++;
        }
        count += (r-l+1);
        r++;
    }
    return count;
}
    int numberOfSubarrays(vector<int>& arr, int target) {
        // Your code goes here.
        return func(arr,target)-func(arr,target-1);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        vector<int> arr;
        stringstream ss(input);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        int target;
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.numberOfSubarrays(arr, target) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends