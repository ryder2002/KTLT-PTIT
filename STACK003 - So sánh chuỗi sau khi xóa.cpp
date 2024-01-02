#include <string>
#include <stack>
#include <iostream>
using namespace std;
stack<char>st1;
stack<char>st2;
bool kiemtra(){
	if(st1.size() != st2.size())
	return false;
	while(! st1.empty()){
		if(st1.top()!= st2.top()){
			return false;
		}
		st1.pop();
		st2.pop();
	}
	return true;
}
void taost(string s,stack<char>&st){
	st.push(s[0]);
	for(int i=1;i<s.length();i++){
		if(s[i]=='#'){
			st.pop();
		}
		else
		st.push(s[i]);
	}
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s1,s2;
		getline(cin,s1,' ');
		getline(cin,s2);
		taost(s1,st1);
		taost(s2,st2);
		if(kiemtra())
		cout<<"1";
		else
		cout<<"0";
		cout<<endl;
	}
}