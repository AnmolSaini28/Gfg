class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        // code here
        int n = arr.size();
        stack <int> s;
        vector <int> ans;
        for(int i=n-1 ; i>=0 ; i--){
            s.push(arr[i]);
        }
        
        for(int i=n-1 ; i>=0 ; i--){
            while(s.empty() == false && s.top() <= arr[i]){
                s.pop();
            }
            int res = (s.empty() == false)? s.top() : -1;
            ans.push_back(res);
            s.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};