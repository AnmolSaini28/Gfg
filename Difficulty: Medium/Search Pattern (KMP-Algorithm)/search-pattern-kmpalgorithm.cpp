//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector <int> fillLPS(string str){
            int x = str.length();
            vector <int> lps(x,0);
            int len = 0;
            lps[0] = 0;
            int i = 1;
            while(i < x){
                if(str[i] == str[len]){
                    len++;
                    lps[i] = len;
                    i++;
                }
                else{
                    if(len == 0){
                        lps[i] = 0;
                        i++;
                    }
                    else{
                        len = lps[len-1];
                    }
                }
            }
            return lps;
        }
        
        vector <int> search(string& pat, string& txt)
        {
            vector <int> ans;
            int n = txt.length();
            int m = pat.length();
            vector<int> lps = fillLPS(pat);
            int i=0 , j=0;
            while(i<n){
                if(pat[j] == txt[i]){
                    i++;
                    j++;
                }
                if(j == m){
                    ans.push_back(i-j);
                    j = lps[j-1];
                }
                else if(i<n && pat[j] != txt[i]){
                    if(j == 0){
                        i++;
                    }
                    else{
                        j = lps[j-1];
                    }
                }
            }
            if(ans.size() == 0){
                return {};
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends