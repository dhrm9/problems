//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beauty(vector<int>&ans){
        int mf=-1;
        int lf=1e9;
        for(int i=0;i<26;i++){
            mf=max(mf,ans[i]);
            if(ans[i]>=1){
                lf=min(lf,ans[i]);
            }
        }
        return mf-lf;
    }
    int beautySum(string s) {
     int sum=0;
      for(int i=0;i<s.length();i++){
          vector<int>ans(26,0);
          for(int j=i;j<s.length();j++){
              ans[s[j]-'a']++;
              sum+=beauty(ans);
          }
      }
      return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends