//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
       for(int i=0;i<n;i++){

            char s='A';

            for(int j=0;j<n+i;j++){

                if(j<n-i-1)

                cout<<" ";

                else if(j<n-1)

                cout<<s++;

                else

                cout<<s--;

            }

            cout<<endl;

        
         }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends