

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector <int> res;
        int n = arr.size();
        int curr = INT_MIN;
        for(int i=n-1 ; i>=0 ; i--){
            curr = max(curr,arr[i]);
            if(arr[i] >= curr){
                res.insert(res.begin(),arr[i]);
            }
        }
        return res;
    }
};