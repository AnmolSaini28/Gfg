class Solution {
  public:
    vector<int> asciirange(string& s) {
        // code here
        int n = s.size();
        vector<pair<int,int>> positionOfOccurance(26,{-1,-1});
        long long sum = 0;
        vector<long long> asciiSum(n,0);
        
        for(int i = 0; i<n; i++){
            sum += s[i];
            // cout<<sum<<" ";
            asciiSum[i] = sum;
            
            if(positionOfOccurance[s[i]-'a'].first == -1){
               positionOfOccurance[s[i]-'a'].first = i; 
            }else{
               positionOfOccurance[s[i]-'a'].second = i; 
            }
        }
        
        
        vector<int> result;
        
        for(auto const &[firstPos, secondPos] : positionOfOccurance){
            if(firstPos != -1 && secondPos != -1 && secondPos - firstPos > 1){
                int betweenSum = (int)(asciiSum[secondPos - 1] - asciiSum[firstPos]);
                result.push_back(betweenSum);  
            }
        }
        
        
        return result;
    }
};