// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        map<int,int> s;
        for(int i =0;i<n;i++){
            s[a[i]]++;
        }
        int count =0;
        for(int j=0;j<m;j++){
            if(s[b[j]]!=0){
                count++;
                s.erase(b[j]);
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}  // } Driver Code Ends