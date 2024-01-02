#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == ','){
				s[i] = ' ';
			}
		}
		vector<string> v;
		stringstream ss(s);
		string token;
		while(ss >> token){
			v.push_back(token);
		}
		stack<ll> stk;
		for(int i = 0; i < v.size(); i++){
			if(v[i] == "C"){
				if(!stk.empty()){
					stk.pop();
				}
			}
			else if(v[i] == "D"){
				stk.push(2 * stk.top());
			}
			else if(v[i] == "+"){
				ll tmp1 = stk.top();
				stk.pop();
				ll tmp2 = stk.top();
				ll sum = tmp1 + tmp2;
				stk.push(tmp1);
				stk.push(sum);
			}
			else{
				stk.push(stoll(v[i]));
			}
		}
		ll ans = 0;
		while(!stk.empty()){
			ans += stk.top();
			stk.pop();
		}
		cout << ans << endl;
	}
	return 0;
}