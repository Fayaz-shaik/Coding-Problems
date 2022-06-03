// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<pair<int,int>> vv;
    void TOH(int N, int st,int mid,int gl){
        if(N==1){
            vv.push_back({st,gl});
            return;
        }
        TOH(N-1,st,gl,mid);
        vv.push_back({st,gl});
        TOH(N-1,mid,st,gl);
    }
    vector<int> shiftPile(int N, int n){
        // code here
        TOH(N,1,2,3);
        vector<int> vvv;
        vvv.push_back(vv[n-1].first);
        vvv.push_back(vv[n-1].second);
        return vvv;
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