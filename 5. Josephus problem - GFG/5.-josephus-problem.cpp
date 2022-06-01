// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int josephus(int n, int k)
    {
       //Your code here
    if(k==1) return n;   
   list<int> vimm;
   for(int i = 1;i<=n;i++){
       vimm.push_back(i);
   }
   int j =1;
while(!false){
    if(vimm.size()==1) break;
    int temp = vimm.front();
    vimm.pop_front();
    if(j!=0) vimm.push_back(temp);
    j= (j+1)%k;
}
return vimm.front();
    
    }
};



// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends