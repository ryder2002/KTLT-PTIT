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

void thaydoi(string &s){
	for(int i=0;i<s.size();++i){
		if(s[i]==',') s[i]=' ';
	}
}


int main(){
	fast();
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		vector<ll> v;
		thaydoi(s);
		stringstream ss(s);
		string w;
		ll p=1;
		while(ss>>w){
			ll a=stoll(w);
			v.pb(a);
			p=p*a;
		}
		
		for(int i=0;i<v.size()-1;++i){
			cout<<p/v[i]<<",";
		}
		cout<<p/v[v.size()-1]<<el;
	}	

}