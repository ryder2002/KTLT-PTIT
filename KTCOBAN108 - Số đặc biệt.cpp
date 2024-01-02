#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define el endl

ll Mod(string s,ll x){
	ll res=0;
	for(int i=0;i<s.size();++i){
		res=res*10+s[i]-'0';
		res=res%x;
	}
	return res;
}

void fast(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

string Min(string a,string b){
	if(a.size()>b.size()) return b;
	else if(a.size()<b.size()) return a;
	else{
		int i=0,j=0;
		while(i<a.size()&&j<b.size()){
			if(a[i]==b[j]){
				++i; ++j;
			}
			else if(a[i]>b[j]){
				return b;
			}
			else return a;
		}
	}
}

int main(){
	fast();
	int t; cin>>t;
	while(t--){
		
		ll x; cin>>x;
		string tmp="-1";
		for(int i=0;i<=200;++i){
			for(int j=0;j<=200;++j){
				if(i+j<=200&&i+j>=1){
					string y="";
					string z="";
					for(int k=0;k<i;++k) y+="8";
					for(int k=0;k<j;++k) z+="6";
					y=y+z;
					if(Mod(y,x)==0){
						if(tmp=="-1") tmp=y;
						else{
							tmp=Min(tmp,y);
						}
					}
				}
			}
		}
		cout<<tmp<<el;
	}
}