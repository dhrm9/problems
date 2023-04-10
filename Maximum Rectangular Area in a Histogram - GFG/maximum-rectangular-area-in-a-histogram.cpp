//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<pair<long long,long long>>st,st1;
        vector<long long>left,right,ans,ans1;
        int leftsmaller=-1;
        for(int i=0;i<n;i++){
            if(st.size()==0)
             left.push_back(leftsmaller);
            else if(st.size()>0 && st.top().first>=arr[i]){
                while(st.size()>0 && st.top().first>=arr[i])
                  st.pop();
                 if(st.size()==0)
                  left.push_back(leftsmaller);
                 else
                  left.push_back(st.top().second);
            }
            else if(st.size()>0 && st.top().first<arr[i])
            left.push_back(st.top().second);
            
            st.push({arr[i],i});
        }
        int rightsmaller=n;
        for(int i=n-1;i>=0;i--){
            if(st1.size()==0)
             right.push_back(rightsmaller);
             else if(st1.size()>0 && st1.top().first<arr[i])
             right.push_back(st1.top().second);
             else if(st1.size()>0 && st1.top().first>=arr[i]){
                 while(st1.size()>0 && st1.top().first>=arr[i])
                 st1.pop();
                 if(st1.size()==0)
                  right.push_back(rightsmaller);
                 else
                 right.push_back(st1.top().second);
             }
             st1.push({arr[i],i});
        }
        reverse(right.begin(),right.end());
        
        for(int i=0;i<right.size();i++){
            ans.push_back(right[i]-left[i]-1);
        }
        for(int i=0;i<ans.size();i++){
            ans1.push_back(arr[i]*ans[i]);
        }
        return *max_element(ans1.begin(),ans1.end());
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends