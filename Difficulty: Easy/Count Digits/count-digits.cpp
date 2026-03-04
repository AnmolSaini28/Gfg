class Solution {
  public:
    int countDigits(int n) {
        // code here
        int res = 0;
        int temp = n;
        while(temp > 0){
            res++;
            temp = temp / 10;
        }
        return res;
    }
};