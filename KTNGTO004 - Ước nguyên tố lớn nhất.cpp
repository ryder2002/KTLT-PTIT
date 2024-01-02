#include<bits/stdc++.h>
using namespace std;

long long solve(long long n)
{
	long long res;
    while (n % 2 == 0)
    {
        res = 2;
        n /= 2;
    }
	for(long long i = 3; i <= sqrt(n); i += 2)
	{
		while(n % i == 0)
		{
			res = i;
			n /= i;
		}
	}
	if(n != 1){
		res = n;
	}
	return res;
}


int main()
{
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << solve(n) << endl;
    }
}