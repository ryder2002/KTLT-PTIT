#include <bits/stdc++.h>
using namespace std;
long long sumsnt(long long n)
{
long long sum = 0;
long long a[n + 1];
memset(a, 0, sizeof(a));
long long max = n / 2;
for (long long i = 2; i <= max; i++)
{
if (a[i] == 0)
{
for (int j = i * 2; j <= n; j += i)
a[j] = i;
}
}
for (long long i = 2; i <= n; i++)
{
if (a[i])
sum += a[i];
else
sum += i;
}
return sum;
}
int main()
    {
int t;
cin >> t;
while (t--)
{
long long n;
cin >> n;
cout << sumsnt(n) << endl;
}
return 0;
}