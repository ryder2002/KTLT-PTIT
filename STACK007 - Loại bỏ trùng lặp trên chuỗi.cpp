#include <bits/stdc++.h>
using namespace std;
#include<stack>
void daonguoc(stack<char>st){
	stack<char>st1;
	while(!st.empty()){
		st1.push(st.top());
		st.pop();
	}
	while(!st1.empty()){
		cout<<st1.top();
		st1.pop();
	}
}
void kq(string s){
	stack<char> st;
	for(int i=0;i<s.length();i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else if(s[i]==st.top()){
            st.pop();
        }
        else
            st.push(s[i]);
    }
    daonguoc(st);
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
	return 0;
}