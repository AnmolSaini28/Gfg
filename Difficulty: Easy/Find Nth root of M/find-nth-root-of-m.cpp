//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    if(m == 1) return 1;
	    if(n == 1) return m;
	    for(int i=2 ; i<m ; i++){
	        if((long long) pow(i,n) == m){
	            return i;
	        }
	        else if((long long) pow(i,n) > m){
	            break;
	        }
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	
cout << "~" << "\n";
}  
	return 0;
}
// } Driver Code Ends