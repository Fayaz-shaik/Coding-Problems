// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    vector<pair<int,int>> in;
    void Toh(int N, int st, int gl ,int mid){
        if(N==0) return;
        Toh(N-1,st,mid,gl);
        in.push_back({st,gl});
        Toh(N-1,mid,gl,st);
    }
    vector<int> shiftPile(int N, int n){
        // code here
        Toh(N,1,3,2);
        vector<int> ai;
        ai.push_back(in[n-1].first);
        ai.push_back(in[n-1].second);
        return ai;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends