// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void perm(vector<string> &vv, string &s,int i){
        if(s.length()==i+1){
            vv.push_back(s);
            return;
        }
        for(int j = i;j<s.length();j++){
            swap(s[i],s[j]);
            perm(vv,s,i+1);        
            swap(s[i],s[j]);
        }

    }
    vector<string> permute(string s){
       // code here
       vector<string> vv;
       perm(vv,s,0);
       return vv;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution obj;
		vector<string> ans;
		ans = obj.permute(s);
		sort(ans.begin(), ans.end());
		for(auto x: ans)
		    cout << x << " ";
		
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends