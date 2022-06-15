// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


int chocolates(int arr[], int n);


int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        cout << chocolates(arr, n);
        cout << endl;
        
    }

}
// } Driver Code Ends



int chocolates(int arr[], int n)
{
    // Complete the function

    if(n==1){
        return arr[0];
    }
    if(n==2){
        return ((arr[0]<arr[1])?arr[0] : arr[1]);
    }
    int i = 0;
    int j = n-1;
    while(i+1!=j){
        if(arr[i]<arr[j]){
            j--;
        }
        else{
            i++;
        }
    }
return ((arr[i]<arr[j])?arr[i] : arr[j]);
    
    
}
