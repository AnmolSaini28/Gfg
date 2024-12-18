//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  bool isFeasible(vector<int> &A, int N, int M, int ans){
        int sum = 0;
        int req = 1;
        for(int i=0 ; i<N ; i++){
            if(sum+A[i] > ans){
                req++;
                sum = A[i];
            }
            else{
                sum += A[i];
            }
        }
        return (req <= M);
    }
    int findPages(vector<int> &A, int M) {
        int N = A.size();
        if(M>N){
            return -1;
        }
        int sum = 0;
        int maxi = -1;
        for(int i=0 ; i<N ; i++){
            sum += A[i];
            maxi = max(maxi,A[i]);
        }
        int low = maxi , high = sum;
        int res = -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(isFeasible(A,N,M,mid)){
                res = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends