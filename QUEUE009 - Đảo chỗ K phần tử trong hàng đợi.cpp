#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define el endl

void thaydoi(string &s){
	for(int i=0;i<s.size();++i){
		if(s[i]==',') s[i]=' ';
	}
}


int main(){
	int t; cin>>t;
	while(t--){
		string s;
		ll k; 
		cin>>s>>k;
		
		thaydoi(s);
		stringstream ss(s);
		vector<string> v;
		string w;
		while(ss>>w){
			v.pb(w);
		}
		reverse(v.begin(),v.begin()+k);
		for(int i=0;i<v.size()-1;++i){
			cout<<v[i]<<",";
		}
		cout<<v[v.size()-1]<<el;
	}
}