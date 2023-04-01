//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        if(n==1)
         return arr[0];
        if(n==0)
         return "";
        sort(arr,arr+n);
        string st="";
        string first=arr[0];
        string last=arr[n-1];
        for(int i=0;i<first.length();i++){
            if(first[i]==last[i])
            st+=first[i];
            else
            break;
        }
        if(st.length()==0)
        return "-1";
        
        
        return st;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends