//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long findNumber(long long n){
       long long ans=0;
       while(n){
           ans=ans*10;
           if(n%5==0){
               ans=ans+9;
               n=n/5;
               n--;
           }
           else if(n%5==1){
               ans+=1;
               n=n/5;
           }
           else if(n%5==2){
               ans+=3;
               n=n/5;
           }
           else if(n%5==3){
               ans+=5;
               n=n/5;
           }
           else if(n%5==4){
               ans+=7;
               n=n/5;
           }
       }
       long long temp=0;
       while(ans){
           temp=temp*10+ans%10;
           ans=ans/10;
       }
       return temp;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.findNumber(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends