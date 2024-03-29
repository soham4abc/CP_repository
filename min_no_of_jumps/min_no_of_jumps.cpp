#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
    if(n==1)
    return 0;
    if(arr[0]==0)
    return -1;
    int rng=arr[0];
    int steps=arr[0];
    int jump=1;
    for(int i=1;i<n;i++)
    {
        if(i==n-1)
        return jump;
        rng=max(rng,i+arr[i]);
        steps--;
        if(steps==0){
            jump++;
            if(rng<=i)
            return -1;
            steps=rng-i;
        }
    }
    return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}