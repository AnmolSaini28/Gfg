class Solution {
  public:
    int factorial(int n) {
        int sum=1;
        for(int i=2;i<=n;i++) {
            sum*=i;
        }
        return sum;
    }
  
    int vowelCount(string& s) {
        // code here
        unordered_map<char,int>omap;
        for(int i=0;i<s.length();i++) {
            if(s.at(i)=='a'||s.at(i)=='e'||s.at(i)=='i'
            ||s.at(i)=='o'||s.at(i)=='u') {
                omap[s.at(i)]++;
            }
        }
        if(omap.size()==0) {
            return 0;
        }
        int total = factorial(omap.size());
        for(auto i :omap) {
            total*=i.second;
        }
        return total;
    }
};