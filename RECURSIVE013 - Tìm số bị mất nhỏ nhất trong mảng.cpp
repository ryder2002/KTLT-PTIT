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
		ll cnt=0;
		if(s=="<trắng>") cout<<0<<el;
		else{
			thaydoi(s);
			stringstream ss(s);
			string w;
			ll ok=1;
			while(ss>>w){
				ll a=stoll(w);
				if(a==cnt){
					++cnt;

				}
				else{
					cout<<cnt<<el;
					ok=0;
					break;
				}
			}
			if(ok) cout<<cnt<<el;
		}

	}	

}