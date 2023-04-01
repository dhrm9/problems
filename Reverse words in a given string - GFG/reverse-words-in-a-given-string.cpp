//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
      int i=0;
      int n=s.length();
      string ans="";
      while(i<n){
          while(i<n && s[i]=='.') i++;
          if(i>=n) break;
          int j=i+1;
          while(j<n && s[j]!='.') j++;
          string sub=s.substr(i,j-i);
          if(ans.length()==0) ans=sub;
          else
          ans=sub+'.'+ans;
          i=j+1;
      }
      return ans;
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends