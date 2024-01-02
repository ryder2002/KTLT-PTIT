#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
	stack<char>st;
	bool check = true;
	for(int i=0;i<s.size();i++){
		st.push(s[i]);
		if(st.size()>=3&&st.top()=='c'){
			st.pop();
			while(!st.empty()){
				char a = st.top();
				st.pop();
				char b = st.top();
				if(a=='b'&&b=='a'){
					st.pop();
					break;
				}
				else{
					check = false;
					break;
				}
			}
		}
	}
	if(check){
		if(st.empty()){
			cout<<"1"<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
	}
	else{
		cout<<"0"<<endl;
		}
	}
	return 0;
}