//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    int zeroending=1;
	    int oneending =1;
	    long long sum=zeroending+oneending;
	    if(n==1)
	     return sum;
	     int i=2;
	     while(i<=n){
             oneending=(zeroending)%1000000007;
             zeroending=sum%1000000007;
             sum=(zeroending+oneending)%1000000007;
             i++;
	     }
	     return sum;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends