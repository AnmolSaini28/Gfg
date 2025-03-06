//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    
  public:
    int lis(vector<int>& arr) {
        int n = arr.size();
        vector <int> lis(n,1);
        for(int i=1 ; i<n ; i++){
            for(int j=0 ; j<i ; j++){
                if(arr[j] < arr[i] && lis[i] < lis[j]+1){
                    lis[i] = lis[j]+1;
                }
            }
        }
        
        int res = 0;
        for(int i=0 ; i<n ; i++){
            res = max(res,lis[i]);
        }
        return res;
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