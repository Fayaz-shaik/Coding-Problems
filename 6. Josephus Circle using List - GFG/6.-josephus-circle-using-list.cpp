// { Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int josephus(int n, int k){
    // code here
    if(k==1) return n;
    list<int> y;
    for(int i =1;i<=n;i++){
        y.push_back(i);
    }
    int ki =1;
    while(true){
        if(y.size()==1) break;
        int tmp = y.front();
        y.pop_front();
        if(ki!=0) y.push_back(tmp);
        ki = (ki+1)%k;
    }
    return y.front();
    
    
}

// { Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    
    while(t-- > 0){
        int n,k;
        cin>>n>>k;
        
        cout<<josephus(n,k)<<"\n";
    }
    
    return 0;
}  // } Driver Code Ends