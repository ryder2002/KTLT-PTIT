#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll a[n];
		for(ll &x : a) cin >> x;
		ll sum1 = 0, sum2 = INT_MIN;
		for(int i = 0; i < n; i++){
			sum1 += a[i];
			sum2 = max(sum1, sum2);
			if(sum1 < 0){
				sum1 = 0;
			}
		}
		cout << sum2 << endl;
	}
	return 0;
}