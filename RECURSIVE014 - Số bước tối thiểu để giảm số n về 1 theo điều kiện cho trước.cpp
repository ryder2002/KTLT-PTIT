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




int main(){
	fast();
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		queue<pair<ll,ll>> q;
		q.push({n,0});
		ll ans=1e18+7;
		ll dem=0;
		while(!q.empty()&&dem<=20000){
			pair<ll,ll> tmp=q.front();
			q.pop();
			if(tmp.first==1) ans=min(ans,tmp.second);
			if(tmp.first%3==0) q.push({tmp.first/3,tmp.second+1});
			if(tmp.first%2==0) q.push({tmp.first/2,tmp.second+1});
			if(tmp.first>1) q.push({tmp.first-1,tmp.second+1});
			dem++;
		}
		cout<<ans<<el;

	}	
}