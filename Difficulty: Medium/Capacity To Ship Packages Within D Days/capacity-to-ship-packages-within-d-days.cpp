//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    private:
    bool calculateDays(int weights[], int n, int days, int mid){
        int count = 1;
        int cap = 0;
        for(int i=0 ; i<n ; i++){
            if(cap + weights[i] > mid){
                count++;
                cap = weights[i];
            }
            else{
                cap += weights[i];
            }
        }
        return (count <= days);
    }
  public:
    int leastWeightCapacity(int weights[], int n, int days) {
        int sum = 0;
        int ans = -1;
        for(int i=0 ; i<n ; i++){
            sum += weights[i];
        }
        if(days == 1) return sum;
        int low = *max_element(weights,weights+n);
        int high = sum;
        while(low <= high){
            int mid = (low+high)/2;
            if(calculateDays(weights,n,days,mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, D;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        cin >> D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr, N, D) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends