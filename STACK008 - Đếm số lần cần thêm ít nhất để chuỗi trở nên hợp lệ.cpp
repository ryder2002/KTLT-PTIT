#include<bits/stdc++.h>
#include<stack>
using namespace std;
void kq(string s){
	stack<char>st;
	for(int i=0;i<s.length();i++){
		if(st.empty()){
			st.push(s[i]);
		}
		else if(st.top()=='(' && s[i]==')'){
			st.pop();
		}
		else
		st.push(s[i]);
	}
	cout<<st.size();
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; 
		getline(cin,s);
		kq(s);
		cout<<endl;
	}
}