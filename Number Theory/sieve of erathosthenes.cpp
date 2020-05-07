#include <bits/stdc++.h>
#define MAX 1000006

using namespace std;

vector<int> primes;

void sieve() {
	bitset<MAX> isPrime;
	isPrime.set();

	for (int i = 3;i * i <= MAX; i += 2) {
		if(isPrime[i]) {
			for (int j = i * i;j <= MAX;j += (i << 1)) {
				isPrime[j] = 0;
			}
		}
	}

	primes.push_back(2);
	for(int i = 3;i <= MAX;i += 2) {
		if (isPrime[i]) primes.push_back(i);
	}
}

int main() {
	sieve();

	for(int i = 0;i < 20; i++) {
		cout << primes[i] << '\n';
	}
}
