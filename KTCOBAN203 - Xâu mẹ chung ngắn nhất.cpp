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


ll findlen(vector<ll> a){
	vector<ll> ans;
	ans.pb(a[0]);
	for(int i=1;i<a.size();++i){
		if(a[i]>ans.back()) ans.pb(a[i]);
		else{
			ll d=lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
			ans[d]=a[i];
		}
	}
	return ans.size();
}

void thaydoi(string &s){
	for(int i=0;i<s.size();++i){
		s[i]=tolower(s[i]);
	}
}

int main(){
	fast();
	int t; cin>>t;
	while(t--){
		string s1,s2; cin>>s1>>s2;
		ll dp[501][501];
		ll n=s1.size(); ll m=s2.size();
		memset(dp,0,sizeof dp);
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1]+1;
				else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
		cout<<n+m-dp[n][m]<<el;
	}	

}