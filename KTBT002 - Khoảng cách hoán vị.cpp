#include <bits/stdc++.h>
// KTDT002
using namespace std;

#define MAX 50002

vector<int> primes;

void sieve()
{
	bool isPrime[MAX];
	memset(isPrime, true, sizeof(isPrime));

	for (int p = 2; p * p < MAX; p++) {
		if (isPrime[p] == true) {
			for (int i = p * 2; i < MAX; i += p)
				isPrime[i] = false;
		}
	}

	for (int p = 2; p < MAX; p++)
		if (isPrime[p])
			primes.push_back(p);
}

long long int power(long long int x,
					long long int y)
{
	long long int count = 0;
	long long int z = y;
	while (x >= z) {
		count += (x / z);
		z *= y;
	}
	return count;
}


long long int modMult(long long int a,
					long long int b,
					long long int mod)
{
	long long int res = 0;
	a = a % mod;
	while (b > 0) {
		if (b % 2 == 1)
			res = (res + a) % mod;
		a = (a * 2) % mod;
		b /= 2;
	}
	return res % mod;
}


long long int countWays(long long int n,
						long long int m)
{
	long long int ans = 1;

	
	for (int i = 1; i < primes.size(); i++) {
		
		long long int powers = power(n, primes[i]);
		if (powers == 0)
			break;

		ans = modMult(ans, powers + 1, m) % m;
	}

	if (((ans - 1) % m) < 0)
		return (ans - 1 + m) % m;
	else
		return (ans - 1) % m;
}

int main()
{
	sieve();
	int t;
	cin>>t;
	while(t--){
	long long int n , m ;
	cin>>n>>m;
	cout << countWays(n, m)<<"\n";
}
	return 0;
}