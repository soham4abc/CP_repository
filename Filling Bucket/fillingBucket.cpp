#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    long mod = 100000000;
    
    int recurse(int n, vector<int> &dp) {
        if(n == 0)
            return 1;
        if(n < 0)
            return 0;
        if(dp[n] != -1)
            return dp[n];
            
        long long ans = 0;
        ans += recurse(n-1, dp) + recurse(n-2, dp);
        return dp[n] = ans%mod;
    }
    
    int fillingBucket(int N) {
        vector<int> dp(N+1, -1);
        return recurse(N, dp);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}