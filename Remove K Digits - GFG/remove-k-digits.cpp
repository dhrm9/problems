//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string s, int k) {
        string st="";
        for(auto &c:s){
            while(st.size() && st.back()>c && k){
                st.pop_back();
                k--;
            }
            if(st.size() || c!='0')
            st.push_back(c);
        }
        while(st.size()&&k--){
            st.pop_back();
        }
        return st==""?"0":st;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends