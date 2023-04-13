//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
     vector<vector<int>>ans;
        if(intervals.size()==0)  //if interval's size is empty
        return ans;

        sort(intervals.begin(),intervals.end()); //sort the vector so that adjacent smaller elements come together
        vector<int>temp=intervals[0];  //take a tmep vector and push 0th value of intervals in it to compare with others

        for(auto s:intervals){  //travering the vector
        //[[1,3],[2,6],[8,10]]
            if(s[0]<=temp[1]){  //comparing the elemnts 2 and 3
                temp[1]=max(s[1],temp[1]); //if they are not valid assing max of the 3,6 to the temp of 1 such that it will become [1,6]
            }
            else
            {
                ans.push_back(temp); //if elemts 2,3 are in valid order then pushback them to the tmep vector
                temp=s;  //update the temp to the [8,10]
            }   
        }
        ans.push_back(temp); //pushback last elemens such that[15,18] 
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends