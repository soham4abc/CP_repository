//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    vector<vector<int>> solveQueries(int n, vector<vector<int>> Queries) {

        vector<vector<int>>ans(n , vector<int>(n , 0));
        int q = Queries.size();      

        for(int i=0 ; i < q ; i++){

            pair<int , int>topLeft = {Queries[i][0] , Queries[i][1]};
            pair<int , int>bottomRight = {Queries[i][2] , Queries[i][3]};        

            for(int i=topLeft.first ; i <= bottomRight.first ; i++){

                for(int j=topLeft.second ; j <= bottomRight.second ; j++){

                    ans[i][j]+=1;

                }
            }
        }

        return ans;

    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, q;
        cin >> n >> q;
        vector<vector<int>> Queries;
        for (int i = 0; i < q; i++) {
            vector<int> cur(4);
            for (int j = 0; j < 4; j++) cin >> cur[j];
            Queries.push_back(cur);
        }
        Solution obj;
        vector<vector<int>> ans = obj.solveQueries(n, Queries);
        for (auto i : ans) {
            for (auto j : i) cout << j << " ";
            cout << "\n";
        }
    }
    return 0;
}