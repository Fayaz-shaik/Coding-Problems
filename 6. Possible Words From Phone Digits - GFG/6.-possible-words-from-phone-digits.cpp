// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    string sfind(int t){
        if(t==2)
            return "abc";
        if(t==3)
            return "def";
        if(t==4)
            return "ghi";
        if(t==5)
            return "jkl";
        if(t==6)
            return "mno";
        if(t==7)
            return "pqrs";
        if(t==8)
            return "tuv";
        if(t==9)
            return "wxyz";
    }
    void fun(int a[],int N,vector<string> &vv,string curr,int i=0){
        if(i==N){
            vv.push_back(curr);
            return;
        }
        for(int j = 0;j<sfind(a[i]).length();j++){
            fun(a,N,vv,curr+sfind(a[i])[j],i+1);
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string> vv;
        string curr="";
        
        fun(a,N,vv,"");
        sort(vv.begin(),vv.end());
        return vv;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends