#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
	stack<string> st;
	for(int i=0;i<s.size();i++){
		if(s[i]>='a'&&s[i]<='z'){
			string tmp = st.top();
			st.pop();
			tmp+=string(1,s[i]);
			st.push(tmp);
		}
		else if(isdigit(s[i])){
			if(s[i-1]==')'){
				string res ="";
				while(!st.empty()&&st.top()!="("){
					res+=st.top();
					st.pop();
				}
				st.pop();
				int num = s[i] - '0';
				string tmp = "";
				for(int i=0;i<num;i++){
					tmp+=res;
				}
				st.push(tmp);
			}
			else{
				int num = s[i] - '0';
				string tmp = st.top();
				st.pop();
				string res = "";
				for(int i=0;i<num;i++){
					res+=tmp;
				}
				st.push(res);
			}
		}
		else{
			if(s[i]!=')'){
				st.push(string(1,s[i]));
			}
		}
	}
	string res = "";
	while(!st.empty()){
		res+=st.top();
		st.pop();
	}
	map<string,int> mp;
	for(int i=0;i<res.size();i++){
		if(islower(res[i])){
			string tmp = "";
			tmp+=string(1,res[i]);
			tmp = string(1,res[i-1]) + tmp;
			mp[string(1,res[i-1])] = 0;
			mp[tmp]++;
		}
		else{
			mp[string(1,res[i])]++;
		}
	}
	for(auto it : mp){
		if(it.second==1){
			cout<<it.first;
		}
		else if(it.second!=0){
			cout<<it.first<<it.second;
		}
	}
	cout<<endl;
	}
	return 0;
}