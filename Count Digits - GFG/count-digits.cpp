//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
         int temp = N;
        int count = 0;
        while(temp > 0)
         {
             // Extracting last digit of number
             int last = temp % 10;
             // Checking last digit is divisible by N
             if(last > 0 && N % last == 0)
              {
                   count ++;
              }
              // Upgrading given number for extracting next digit
             temp = temp / 10;
         }
         
         return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends