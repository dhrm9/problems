//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        unordered_map<string,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        int odd=0;
        for(auto f:mp){
            string temp=f.first;
            reverse(temp.begin(),temp.end());
            if(temp==f.first){
                if(f.second%2) odd++;
                if(odd>1) return false;
            }
            else{
                if(f.second!=mp[temp]) return false;
            }
        }
        return true;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends