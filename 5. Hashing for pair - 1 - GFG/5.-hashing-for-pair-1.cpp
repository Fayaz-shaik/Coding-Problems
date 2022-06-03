// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int sumExists(int arr[], int N, int sum);

 // } Driver Code Ends
// User function Template for C++

// You need to complete this function.
// Function to check if there is a pair with the given sum in the array.
int sumExists(int arr[], int N, int sum) {
    // Your code here.
    map<int,int> k;
    for(int i = 0 ;i<N;i++){
        k[arr[i]]++;
    }
    for(int ii=0;ii<N;ii++){
        if(((sum-arr[ii])>0)&&(k[sum-arr[ii]]==1)&&((sum-arr[ii])!=arr[ii])){
            return 1;
        }
        
    }
    return 0;
}

// { Driver Code Starts.

int main() {

    int testcases;
    cin >> testcases;
    while (testcases--) {
        int N;
        cin >> N;

        int arr[N];

        for (int i = 0; i < N; i++) cin >> arr[i];
        int sum;
        cin >> sum;

        cout << sumExists(arr, N, sum) << endl;
    }
    return 0;
}
  // } Driver Code Ends