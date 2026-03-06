class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int larg = -1;
        int secLarg = -1;
        for(int i=0 ; i<n ; i++){
            if(arr[i] > larg){
                secLarg = larg;
                larg = arr[i];
            }
            if(arr[i] > secLarg && arr[i] != larg){
                secLarg = arr[i];
            }
        }
        return secLarg;
    }
};