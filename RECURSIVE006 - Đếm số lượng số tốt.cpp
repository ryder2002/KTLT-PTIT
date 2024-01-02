#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define el endl
int  mod=1e9+7;

void fast(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

ll sqr(ll x){
	return (x*x)%mod;
}

ll binpow(ll a, ll b){
	if(b==0) return 1;
	else{
		if(b%2) return ((a%mod)*sqr(binpow(a, b/2)))%mod;
		else return sqr(binpow(a, b/2));
	}
}

int main(){
	fast();
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll x=binpow(4,n/2);
		ll y=binpow(5,(n+1)/2);
		cout<<((x%mod)*(y%mod))%mod<<el;
	}	

}