// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the number of ways
// to get the sum N with throw of dice
int findWays(int N)
{
	// Base Case
	if (N == 0) {
		return 1;
	}

	// Stores the count of total
	// number of ways to get sum N
	int cnt = 0;

	// Recur for all 6 states
	for (int i = 1; i <= 6; i++) {

		if (N - i >= 0) {

			cnt = cnt
				+ findWays(N - i);
		}
	}

	// Return answer
	return cnt;
}

// Driver Code
int main()
{
	int n;
    printf("Enter an integer: ");
    scanf("%d", &n); 

	// Function call
	cout << findWays(n);

	return 0;
}
