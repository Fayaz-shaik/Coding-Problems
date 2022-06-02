// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    
    int minAdjDiff(int arr[], int n){    
        // Your code here
        int min = INT_MAX;
        int tmp;
        for(int i=1;i<=n;i++){
            if(i==n){ 
                tmp = arr[0]-arr[n-1];
                if(tmp<0){
                    tmp = -1*tmp;
            }
            if(tmp<min){
                return tmp;
            }
            }
            else{
            tmp = arr[i]-arr[i-1];
            if(tmp<0){
                tmp = -1*tmp;
            }
            if(tmp<min){
                min = tmp;
            }
        }
        
        }
        return min;
        
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; //Input testcases
    
    while(t--) //While testcases exist
    {
        int n;
        cin>>n; //Input size of array
        
        int arr[n]; //Array of size n
        
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i]; //input elements of array
        }
        Solution ob;
        
        cout << ob.minAdjDiff(arr, n) << endl;
    }
    return 0;
}  // } Driver Code Ends