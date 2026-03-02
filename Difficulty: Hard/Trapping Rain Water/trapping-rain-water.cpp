class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        int start = 0;
        int end = n-1;
        int lMax = 0 , rMax = 0;
        int res = 0;
        while(start <= end){
            if(arr[start] <= arr[end]){
                if(arr[start] >= lMax){
                    lMax = arr[start];
                }
                else{
                    res += lMax-arr[start];
                }
                start++;
            }
            else{
                if(arr[end] >= rMax){
                    rMax = arr[end];
                }
                else{
                    res += rMax-arr[end];
                }
                end--;
            }
        }
        return res;
    }
};