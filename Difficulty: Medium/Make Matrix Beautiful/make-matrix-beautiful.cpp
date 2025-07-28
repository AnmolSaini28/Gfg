class Solution {
  public:
    int balanceSums(vector<vector<int>>& m) {
        // code here
        int n=m.size();
              int sm=INT_MIN;int sum=0;
       for(int i=0;i<n;i++){
           int sr=0,sc=0;
           for(int j=0;j<n;j++){
               sum+=m[i][j];
               sr+=m[i][j],sc+=m[j][i];
           }
           sm=max(sm,max(sr,sc));
       }
       return (sm*n)-sum;
    }
};