// C++ code to implement the approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum required time
// for the alarm to turn on
long buzzTime(long N, long M, long L,
			long H[], long A[])
{
	long l = 0, r = 0, mid, sum = 0;
	long x = max(M, L);

	// Loop to find the maximum possible time
	for (long i = 0; i < N; i++) {
		if ((x - H[i]) % A[i] == 0)
			r = max(r, (x - H[i]) / A[i]);
		else
			r = max(r, (x - H[i]) / A[i] + 1);
	}

	// Loop to implement binary search
	while (l <= r) {
		mid = (l + r) / 2;
		sum = 0;

		// Loop to calculate the speed of
		// each bike at that time
		for (long i = 0; i < N; i++)
			if ((H[i] + A[i] * mid) >= L)
				sum += (H[i] + A[i] * mid);

		// Check if the speed of the track
		// is at least M
		if (sum >= M)
			r = mid - 1;
		else
			l = mid + 1;
	}

	// Return the minimum time required
	return l;
}

// Driver code
int main()
{
	long L = 120, M = 60;
	long H[] = { 50,30 };
	long A[] = { 20, 40 };
	long N = sizeof(H) / sizeof(H[0]);

	// Function call
	long minHour = buzzTime(N, M, L, H, A);
	cout << minHour;
	return 0;
}

