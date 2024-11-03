//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1+n2;
        int cnt = 1;
        int i=0 , j=0;
        while(i<n1 && j<n2){
            if(nums1[i] < nums2[j]){
                if(cnt == k){
                    return nums1[i];
                }
                i++;
                cnt++;
            }
            else{
                if(cnt == k){
                    return nums2[j];
                }
                j++;
                cnt++;
            }
        }
        while(i<n1){
            if(cnt == k){
                return nums1[i];
            }
            i++;
            cnt++;
        }
        while(j<n2){
            if(cnt == k){
                return nums2[j];
            }
            j++;
            cnt++;
        }
        return k;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends