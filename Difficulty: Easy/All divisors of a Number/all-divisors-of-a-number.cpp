//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        vector<int> divisors; 

        int sqrtN = sqrt(n); 
    

        for (int i = 1; i <= sqrtN; ++i) { 
            if (n % i == 0) { 
                divisors.push_back(i); 
                if (i != n / i) {
                    divisors.push_back(n / i); 
                }
            }
        }
        
        sort(divisors.begin(), divisors.end());
        for (size_t s = 0; s < divisors.size(); ++s) {
            cout << divisors[s] << " ";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends