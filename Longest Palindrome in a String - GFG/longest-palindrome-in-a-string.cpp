//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        int n=s.length();
        if(n<=1) return s;
        
        int maxi=INT_MIN;
        int start=0,end=0;
        for(int i=0;i<n-1;i++){
            int l=i,r=i;
            while(l>=0&&r<n&&s[l]==s[r]){
                l--;
                r++;
            }
            int length=r-l-1;
            if(length>maxi){
                maxi=length;
                start=l+1;
                end=r-1;
            }
        }
        
        for(int i=0;i<n-1;i++){
            int l=i,r=i+1;
            while(l>=0&&r<n&&s[l]==s[r]){
                l--;
                r++;
            }
            int length=r-l-1;
            if(length>maxi){
                maxi=length;
                start=l+1;
                end=r-1;
            }
         }
         return s.substr(start,maxi);
       }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends