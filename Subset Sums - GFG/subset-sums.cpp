//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void genrate(int ind,int sum,vector<int>&arr,vector<int>&ans,int size){
        if(ind==size){
            ans.push_back(sum);
            return;
        }
        //pick case
        genrate(ind+1,sum+arr[ind],arr,ans,size);
        //not pick case
        genrate(ind+1,sum,arr,ans,size);
        
    }
    vector<int> subsetSums(vector<int> arr, int n){
        vector<int>ans;
        genrate(0,0,arr,ans,n);
        sort(ans.begin(),ans.end());
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
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends