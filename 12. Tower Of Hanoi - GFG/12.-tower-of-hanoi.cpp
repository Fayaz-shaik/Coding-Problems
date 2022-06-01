// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // You need to complete this function
    long long c = 0;
    // avoid space at the starting of the string in "move disk....."
    void hee(int N, int A,int B,int C){
        if(N==0) return;
        hee(N-1,A,C,B);
        cout<<"move disk "<<N<<" from rod "<< A <<" to rod "<<B<<endl;;
        c++;
        hee(N-1,C,B,A);
    }
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        hee(N,from,to,aux);
        return c;
    }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.  // } Driver Code Ends