// { Driver Code Starts
//Initial Template for C++


// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


//Function to return the lexicographically sorted power-set of the string.
void sub(vector<string> &vv,string s,string curr,int i){
    if(s.length()==i){
        vv.push_back(curr);
        return;
    }
    sub(vv,s,curr,i+1);
    sub(vv,s,curr+s[i],i+1);
}
//Function to return the lexicographically sorted power-set of the string.
vector <string> powerSet(string s)
{
    vector<string> vv;
   //Your code here
   sub(vv,s,"",0);
   return vv;
}


// { Driver Code Starts.


// Driver code
int main()
{
    int T;
    cin>>T;//testcases
    while(T--)
    {
        string s;
        cin>>s;//input string
        
        //calling powerSet() function
        vector<string> ans = powerSet(s);
        
        //sorting the result of the powerSet() function
        sort(ans.begin(),ans.end());
        
        //printing the result
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }

return 0;
}   // } Driver Code Ends