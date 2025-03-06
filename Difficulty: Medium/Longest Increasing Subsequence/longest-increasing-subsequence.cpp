//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    private:
    int ceilIndex(vector<int>& res , int l , int r , int x){
        while(r > l){
            int mid = l + (r-l)/2;
            if(res[mid] >= x){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        return r;
    }
  public:
    int lis(vector<int>& nums) {
        // code here
        int n = nums.size();
        vector <int> res;
        res.push_back(nums[0]);
        for(int i=1 ; i<n ; i++){
            if(nums[i] > res[res.size()-1]){
                res.push_back(nums[i]);
            }
            else {
                int index = ceilIndex(res,0,res.size()-1,nums[i]);
                res[index] = nums[i];
            }
        }
        return res.size();
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input

    while (t--) {
        int n;
        vector<int> arr;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            arr.push_back(num);

        Solution obj;
        cout << obj.lis(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends